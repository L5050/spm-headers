"""
Creates a source file including all headers
"""

from argparse import ArgumentParser
from os import listdir
from os.path import isdir
from typing import List


def find_headers(dirname: str, base=None) -> List[str]:
    """Returns a list of all headers in a folder recursively"""

    if base is None:
        base = dirname

    ret = []
    for name in listdir(dirname):
        path = dirname + '/' + name
        if isdir(path):
            ret.extend(find_headers(path, base))
        elif name.endswith('.h'):
            ret.append(path[len(base)+1:])

    return ret


def make_includes(dirnames: List[str]) -> str:
    """Returns a chain of #includes for all headers in a folder"""

    headers = []
    for dirname in dirnames:
        headers.extend(find_headers(dirname))

    return '\n'.join(
        f"#include <{header}>"
        for header in headers
    )


if __name__ == "__main__":
    parser = ArgumentParser()
    parser.add_argument("dirs", type=str, nargs='+', help="Folders to include")
    args = parser.parse_args()

    # Find all headers
    includes = make_includes(args.dirs)

    # Output
    print(includes)

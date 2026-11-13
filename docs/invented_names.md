# Invented names

The game shipped without its symbol names. Some names survive: the classes with virtual
functions (through RTTI), the open-source libraries' functions (through their published
source), and the names that assertion strings mention. Every other name in this project was
chosen by a contributor. This page says how to tell the two apart.

## Placeholders

| Form | Meaning |
| --- | --- |
| `fn_<address>`, `lbl_<address>` | a function or data object with no name yet |
| `<Role>_<address>`, such as `Vec_83037438` or `Obj_829B3860` | a class or struct whose real name is not known; the role is a guess at what it is, and the address is that of the first function it was declared for |
| `vf08`, `avf0C` | a virtual function named after its vtable offset |

## Invented member functions

Some functions only compile to the game's code as C++ member functions: the compiler sets
up `this` and a hidden return pointer in an order that no C function reproduces. A member
function's symbol encodes its class and method names, so such a function needs both. When the
class is a placeholder, the method name is invented too.

[`invented_names.tsv`](invented_names.tsv) lists every one of these: the function's address,
the placeholder class, the method name and the symbol. Constructors, destructors and the
compiler's virtual-call thunks have no method name of their own and are listed by what they
are. A symbol is in the table when its class
has the `<Role>_<address>` form, so the symbol itself shows that the names are not the game's.
Method names there (`Grow`, `Erase`, `Collect`, ...) describe what the code does; none comes
from the game. Regenerate the table with `python3 scripts/invented_names.py` after adding or
renaming such a function.

When a class's real name turns up, rename the class and its methods in `symbols.txt` and the
sources, and the rows leave the table.

## Other invented names

| Name | Why |
| --- | --- |
| `d3dx_` + upstream name | D3DX's own copies of libjpeg and zlib 1.1.4, which would clash with the game's other copies ([licenses/README.md](licenses/README.md)) |
| `xboxkrnl_sprintf` | the import thunk of the kernel's `sprintf`, which would clash with the C runtime's |
| `ltcg_pool_<value>` | a floating-point constant that link-time code generation put in a constant pool ([CONTRIBUTING.md](../CONTRIBUTING.md), "C++ classes") |

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

## Folded functions

The game was linked with identical functions folded together, so one address can stand for
the same member function of several classes or template instantiations. Two cases:

* `fn_8277D098` grows a paged array. One caller uses it for 16-byte elements and another for
  4-byte ones; the code itself never mentions the element size.
* The lip-sync library's `std::vector<T>::_Make_iter` at `0x8266A4A8` serves a vector of
  12-byte elements and a vector of 4-byte ones.

Such a function cannot take one class's name. Its symbol keeps the `fn_` placeholder, or, as
for `0x8266A4A8`, takes a member name on a placeholder base class that stands for the fold
(`VectorBase_8266A4A8::MakeIter`).

Some callers only compile to the game's code when they call the folded function as a member
(the compiler then sets up the hidden result pointer before `this`). Such a unit declares the
member on a placeholder class of its own, and its `objects.json` entry maps the name the
compiler emits onto the folded function's symbol with `"pool_aliases"`, the same mechanism
that maps a pooled constant (see "C++ classes" in [CONTRIBUTING.md](../CONTRIBUTING.md)):

```json
"pool_aliases": { "?begin@Tree_82660020@@QAA?AUIter_82660020@@XZ": "fn_8265F888" }
```

The class and method names on the left exist only in that unit's source; they are invented
and do not appear in `symbols.txt`. The same entry is used where the game has two copies of
one template instantiation (`func_825507B0` and `func_82675040.cpp` are both the same
`std::_Tree::_Insert`): `symbols.txt` gives the real name to one copy, and the other unit
maps its definition onto its `fn_` symbol.

## Other invented names

| Name | Why |
| --- | --- |
| `d3dx_` + upstream name | D3DX's own copies of libjpeg and zlib 1.1.4, which would clash with the game's other copies ([licenses/README.md](licenses/README.md)) |
| `xboxkrnl_sprintf` | the import thunk of the kernel's `sprintf`, which would clash with the C runtime's |
| `ltcg_pool_<value>` | a floating-point constant that link-time code generation put in a constant pool ([CONTRIBUTING.md](../CONTRIBUTING.md), "C++ classes") |

# Contributing

Kinect Sports is being reconstructed one function at a time. The C already in `src/` comes largely from Ghidra. It gives you a place to start; objdiff shows what your changes actually match.

## Set up

Place `default.xex` from your own copy of the game as shown in the [README](README.md), then run `python3 configure.py`. You will need the Xbox 360 compiler, Jeff, objdiff and, on Linux, Wibo. Build the original object for the function you choose; a full `ninja` build is not needed for each iteration. Keep game files and generated objects out of commits.

On Windows, use `py` where these instructions say `python3`. In PowerShell, end a continued line with a backtick (`` ` ``) instead of `\`.

## Where the source is

Each function starts as a unit of its own, a file named after its address: `func_82400E48.c`, or `.cpp` once it is written as C++. A unit is named in `config/4D5308C9/splits.txt` and `objects.json` by the path of its source below `src/`, and the build's files follow that path: the original object is `build/4D5308C9/obj/<path>.obj`, the compiled one `build/4D5308C9/src/<path>.obj`, and the original's assembly `build/4D5308C9/asm/<path>.s`.

The folder says what is known about the function's original source file:

- `src/auto_match/` holds the functions whose original file is not known.
- A function whose original file is known is in a folder named after that file, inside folders that follow the original source tree. `src/XDK/xtl/graphics/xgraphics/ucode/ssm/util/linkedlist/func_82AB4A28.c` is a function of the XDK's `xtl\graphics\xgraphics\ucode\ssm\util\linkedlist.cpp`. The file name stays `func_<address>`, so it is still unique in the project and the tools find a unit by its address wherever it is.
- A file whose functions are all known and all match becomes one unit named after it, beside its folder, and the folder goes away: the units in `src/Scaleform/jpeg-6b/jcparam/` will become `src/Scaleform/jpeg-6b/jcparam.c`, as `src/Scaleform/jpeg-6b/jdapimin.c` already is.

[docs/source_layout.tsv](docs/source_layout.tsv) records why each unit is where it is: the original file, the evidence, and how sure it is. A unit is placed only on `direct` or `strong` evidence; weaker inferences stay in `src/auto_match/` ([docs/source_files.md](docs/source_files.md) defines the terms).

To place a unit yourself, move its source with `git mv`, give it the new path in `splits.txt` and `objects.json` (its own entry, and every `ltcg_units` list that names it), add its row to `docs/source_layout.tsv`, then run `python3 configure.py` and `ninja`. Until the split has run again, `configure.py` reports the old name as missing.

## Work on a function

Choose a function under `src/` whose entry in `config/4D5308C9/objects.json` is `NonMatching`. Work on a separate branch so others can work on different functions at the same time. Read its C, the corresponding assembly under `build/4D5308C9/asm/`, and its object in objdiff. If [docs/source_files.tsv](docs/source_files.tsv) lists the function, it names the original source file; the other functions of that file were built with the same flags and share its types and helpers ([docs/source_files.md](docs/source_files.md)).

Build the original object once, then compile and compare just your function as you iterate:

```sh
ninja build/4D5308C9/obj/auto_match/func_82400E48.obj
python3 scripts/evaluate_candidate.py 0x82400E48 src/auto_match/func_82400E48.c \
  --compiler /path/to/X360/16.00.10224.00/cl.exe \
  --cflags /nologo /c /TC /O1
```

For a unit in another folder, use its path in both commands; the evaluator finds the original object from the address. It prints the code match and saves the full objdiff result under the local lab directory. On Windows, it runs the compiler directly. On other platforms, it uses Wibo; set `WIBO` if the wrapper is not on your `PATH`. Set `OBJDIFF_CLI` if objdiff is not on your `PATH`. Try `/O2` when the assembly suggests a different optimization setting. Inspect objdiff's instruction and relocation differences before calling a function complete.

The splitter decides which instructions refer to symbols, and it is occasionally wrong. A 32-bit constant built with `lis` and `ori`, such as an error code like `0x82240404`, can fall inside a function's address range and become a relocation that no source can reproduce; MSVC builds addresses with `lis` and `addi`, never `ori`. List such instructions under `block_relocations` in `config/4D5308C9/config.yml`. Where the splitter missed a real address, for example one whose halves are split across a stack spill, `add_relocations` restores it. Rerun `configure.py` after changing either. The splitter also never relocates the 64-bit loads and stores `ld` and `std`; `scripts/ds_relocs.py` finds those sites and keeps their `add_relocations` entries in a generated block (run it with `--check` after a symbol edit that moves a 64-bit global).

Some differences have causes that are easy to miss:

- **Saved registers in a different order.** This is often a call that Ghidra gave too few arguments, or an argument with the wrong width. Compare the argument registers the callee reads with what the call passes before changing the order of statements.
- **A byte swap.** A 32-bit swap built from `srwi` and three `rlwimi` is the compiler intrinsic `_byteswap_ulong`; `_byteswap_ushort` and `_byteswap_uint64` produce the 16- and 64-bit forms. No combination of shifts and masks produces the same code.
- **A switch without a range check.** The compiler tests the value against the highest case before it uses a jump table or a `bdz` chain. Where the game's code has no such test and no default block, the source marked the default case unreachable: `default: __assume(0);`. That is the only use of `__assume` in matched sources (`func_825474D0`, `func_82606E28`, `func_82485358`, `func_825C7348`); try it as the last and as the first arm, which give different block orders. A chain that ends in a branch to a real default block is a different case.
- **`volatile`.** It makes the compiler reload and store a value at every access, so it can force a match the original source didn't have. Use it only where the code proves it: a loop that polls a field another thread writes, or another function on the same structure that reloads a field right after storing it.

For a function that has no split yet, run `python3 scripts/isolate_functions.py 0xADDRESS`, reconfigure, and build its original object. Ghidra can supply the first C version. `scripts/prepare_full_game_task.py` can also package Ghidra C and assembly if you have generated the local analysis database.

## C++ classes

Much of the game is C++. RTTI gives the names of classes with virtual functions and their base classes, and their vtables appear in the `.rdata` assembly as `??_7ClassName@@6B@`. A method can be written as C++ instead of C when that makes its code clearer or helps it match:

1. Declare the class in a header under `include/`. Take the base classes, in order, from the class's `??_R2` base class array. Keep unknown fields as `unkXX` members at their offsets. Name methods after their vtable offset, such as `vf08`, until their purpose is known.
2. Rename the unit to `.cpp` in `config/4D5308C9/splits.txt` and `objects.json`, and define the method in that file. The build compiles `.cpp` units with `/TP`.
3. Compile the unit and replace the function's `fn_` name in `config/4D5308C9/symbols.txt` with the mangled name the compiler produced. objdiff compares functions by name, and the parameter types, `const` and class all change the mangled name.
4. Run the split again so the original object uses the new name, then evaluate the function. The evaluator finds the configured symbol name and adds `include/` and the source's directory to the compiler's include path; pass `/TP` instead of `/TC` in `--cflags`.

Compiling a header with `/GR` emits RTTI. Its `??_R1` names encode each base class's offset, so they should match the game's when the layout is right.

Many functions without a vtable entry are still member functions. When an `add` or an indexed load or store such as `lwzx` takes its operands in the opposite order to every C spelling, or a call's arguments are set up in an unexpected order, the function is likely a member whose `this` comes first. Declare a placeholder class named after an address, such as `Vec_83037438` or `Element_8288E4B0`, define the function as its member, and rename it to the mangled name. Every `Matching` unit that refers to the old `fn_` name has to become C++ and call the member in the same change. A `NonMatching` caller can keep the old name until it is converted, since it has to become C++ to match anyway. A function that several classes share keeps its `fn_` name.

Declare functions and data that have no names yet inside `extern "C"` with their configured `fn_` or `lbl_` names, so calls to them match without renaming anything.

The compiler generates deleting destructors (`??_G`) wherever it emits a class's vtable, which happens where a constructor or destructor is defined or inlined. A unit for one can include the unit whose code emits the vtable. The game was also linked with identical functions folded together, so one function can appear in the vtables of several classes.

The `R1::Soundscape` event handles in `include/R1/Soundscape/` are an example: the state classes in `EventHandleState.h`, the context that forwards to them in `EventHandleContext.h`, and the `Singleton_c` template and heap operators they use.

The compiler names floating-point constants after their bits, such as `__real@00000000` for `0.0f`, in C and C++ alike. When a constant in `symbols.txt` still has an `lbl_` name, renaming it to the `__real@` form lets source use the literal value instead of an `extern`.

Link-time code generation put the game code's floating-point literals into constant pools (`__pool@_N`) instead, so some of its constants are copies of a library `__real@` constant at another address, under a name that `symbols.txt` gives them. A unit that writes such a literal gets the original's name through `"pool_aliases"` in its `objects.json` entry, which maps a symbol of the compiled object to the name the original refers to, such as `"pool_aliases": {"__real@00000000": "ltcg_pool_0_0f"}` for the game code's 0.0f at 0x821CC160. The pools' own names don't survive linking, so their copies get invented names: `ltcg_pool_` followed by the value as a C literal, with `_` for the decimal point, `em` for the `e-` of a negative exponent and `neg_` for a minus sign, such as `ltcg_pool_0_0f` or `ltcg_pool_0_5f`. A further copy of the same value adds `_2`, `_3` and so on, in address order. After compiling the unit, the build renames those symbols in its object with `tools/coff_rename.py`, so objdiff and the progress report compare the relocation against the pool copy; the build stops if the compiled object has no symbol of that name. The evaluator applies a unit's configured aliases too; `--pool-alias COMPILED=ORIGINAL` tests one that is not configured yet. Where the code can't use the literal, for example because it takes the constant's address, declare the constant by its `symbols.txt` name instead.

## Standard library code

The game uses the Visual C++ 2010 standard library, built without exception handling (`_HAS_EXCEPTIONS=0`), so a failed allocation calls `stdext::bad_alloc(0)._Raise()`. A function that is a standard library template, such as `std::vector<T>::_Insert_n`, can include the real header and instantiate that member explicitly. Some of the generated code depends on exactly how the headers are written, so this can match where a hand-written copy cannot.

The headers can't be distributed, so mark such a unit with `"vc_include": true` in `objects.json`; it is built only when `configure.py` gets `--vc-include` (see the [README](README.md)). To evaluate it, add `/D_HAS_EXCEPTIONS=0 /D_ALLOCA_S_MARKER_SIZE=8 /D_JBLEN=64 /D_JBTYPE=double /I<VC/include>` to `--cflags`. The last three defines stand in for x86-only parts of `malloc.h` and `setjmp.h`.

The game was built with link-time code generation, which inlined some helpers into one caller but not another. When the original calls `operator new` directly where a normal build calls `std::_Allocate`, specialize `std::allocator<T>::allocate` and `std::_Allocate` for the element type as `__forceinline` in the unit. `src/auto_match/func_825870E0.cpp` shows how.

Link-time code generation also inlined larger functions than the compiler does by itself, such as `std::vector<T>::_Reserve` into `push_back`. Adding the compiler's undocumented `/d2inlS1000` option to the unit's `extra_cflags` raises its inlining limit to match. Where the original calls a member out of line instead, declare that member's specialization without defining it. If the member's own unit isn't matched yet, define the specialization as `__forceinline` with a call to the member's `fn_` name instead. `src/auto_match/func_82269F20.cpp` is an example.

Link-time code generation also lets a call depend on how its callee was compiled. Once a variadic function that uses `va_start` has been compiled, every call to it reserves an outgoing parameter area of 8 × (n + 8) bytes for n arguments, instead of the usual 8 × max(n, 8). Its callers therefore have a stack frame 0x10 to 0x30 bytes larger than their locals need, and cannot end in a tail call. A caller reproduces this only when the variadic function is defined in the same unit. So callers and the variadic function they call are grouped into one unit per original source file, named after its first address and kept in its functions' folder, such as `src/auto_match/file_826582F8.c`. Its `splits.txt` entry covers the functions' contiguous `.text` and `.pdata` ranges. Each function in the file sits between `/* @@ begin fn_X */` and `/* @@ end fn_X */` markers, in address order, and is defined only there. To work on one of them, edit its region and pass the whole file to the evaluator with that function's address, such as `scripts/evaluate_candidate.py 0x8265B300 src/auto_match/file_826582F8.c`. Mark the unit `Matching` once every function in it matches. A grouped unit whose original file is known, such as one of the open-source libraries' files, is named after that file instead, in a folder for its library, such as `src/Scaleform/jpeg-6b/jdapimin.c` (see [docs/licenses/README.md](docs/licenses/README.md)).

When the callee came from a different source file, the build can link the units with link-time code generation instead. Add `"ltcg_units"` to the caller's entry in `objects.json`, listing the units whose definitions link-time code generation made visible to it, such as `"ltcg_units": ["auto_match/func_82526C70.c"]` in `func_8225FC80.c`. The list names each unit by its path, so a unit that moves to another folder or changes its extension must be renamed in every list that names it. The build compiles the unit and the listed units with `/GL`, each with its own flags. It links them with `link.exe /LTCG` into a throwaway DLL and turns the code generated for the unit into the unit's usual object, so objdiff and the progress report treat it like any other unit. `tools/ltcg_obj.py` describes the details: every function is exported, missing externals become opaque stubs, data is treated as address-taken, and the listed units are compiled with `/Ob1` so that they are called rather than inlined. An empty list links the unit with stubs only.

Use `ltcg_units` only when the original's code shows that it knew the callee. Signs of this are a frame sized for a variadic callee, a value kept in a volatile register (`r3` to `r12`) across a call to the callee, or string literals reached at offsets from one pooled base. List only the callees that it needs. The game was not always compiled with every callee known, and an extra one can change register use and break a match. Prefer `Matching` callee units. A `NonMatching` one is acceptable only if its source is a faithful definition that uses the same registers as the original, because the caller's code depends on it. The source still defines each function once, in its own unit. To test a candidate this way, add `--ltcg` and the units to the evaluator's arguments, such as `scripts/evaluate_candidate.py 0x8225FC80 src/auto_match/func_8225FC80.c --cflags /nologo /c /TC /O1 --ltcg auto_match/func_82526C70.c`. With `--ltcg` alone, the evaluator uses the unit's configured list.

Running `link.exe /LTCG` under Wibo needs fixes that Wibo 1.2.0 doesn't have: views mapped at a fixed address by `MapViewOfFileEx` must be recorded, and `NdrClientCall2` (on x86_64 hosts) and `FindFirstFileExW` must be implemented. The first was fixed upstream after 1.2.0 ([decompals/wibo#163](https://github.com/decompals/wibo/pull/163)); the other two will be proposed upstream. Until a release has all three, build Wibo with them yourself (this project's maintainers use a local build, `.tools/wibo-ltcg`). Pass it to `python3 configure.py --wibo-ltcg /path/to/wibo` (the default is `--wrapper`) and to the evaluator with `--wibo-ltcg` or `WIBO_LTCG`. `configure.py` tries the tools once and caches the result in `build/ltcg_probe.json`. If they can't run `/LTCG`, it says so and builds these units normally, without counting them as complete. `link.exe` still crashes under Wibo after it has generated code, when it can't find `mspdbsrv`. The listings it needs are already complete by then, so the crash is ignored.

Some headers call a library function directly rather than through a member you can specialize, as `<xtree>` does with `std::_Xlength_error`. To keep the name that C units use, declare the `fn_` name with C linkage in namespace `std` and define the library name as a macro for it around the `#include`, as in `src/auto_match/func_8225EC58.cpp`.

Many containers use one of the game's own allocators instead of `std::allocator`. Placeholder versions are in `include/game/`, named after an address because the classes have no names yet. With any allocator other than `std::allocator`, the library copies scalar elements one at a time instead of with `memmove`. Library helpers that the original calls out of line, such as `std::_Destroy_range` or `std::_Cons_val`, can be specialized as `__forceinline` functions that call their `fn_` names; write out the template arguments, or the compiler silently ignores the specialization. Link-time code generation also knew when such a helper only writes through its argument, as the folded `std::_Tree` iterator `++` and `--` do. The original then keeps values in registers across the call and gives temporaries a shared stack slot. Declaring the `fn_` function `__declspec(noalias)` reproduces this, as in `src/auto_match/func_8288A858.cpp`.

## Send the result

Commit the source, and include any split or object configuration changes the function needs. Keep a partial result as `NonMatching`; mark it `Matching` after the object matches completely. In your pull request, give the address, compiler flags, objdiff result and any useful type or class findings. A compilable improvement is worth sharing even if it is not a full match.

The checked-in progress report is generated from a configured build with `scripts/update_progress.sh`. It is refreshed when changes reach `main`.

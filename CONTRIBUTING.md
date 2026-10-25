# Contributing

Kinect Sports is being reconstructed one function at a time. The C already in `src/auto_match/` comes largely from Ghidra. It gives you a place to start; objdiff shows what your changes actually match.

## Set up

Place `default.xex` from your own copy of the game as shown in the [README](README.md), then run `python3 configure.py`. You will need the Xbox 360 compiler, Jeff, objdiff and, on Linux, Wibo. Build the original object for the function you choose; a full `ninja` build is not needed for each iteration. Keep game files and generated objects out of commits.

On Windows, use `py` where these instructions say `python3`. In PowerShell, end a continued line with a backtick (`` ` ``) instead of `\`.

## Work on a function

Choose a function in `src/auto_match/` whose entry in `config/4D5308C9/objects.json` is `NonMatching`. Work on a separate branch so others can work on different functions at the same time. Read its C, the corresponding assembly in `build/4D5308C9/asm/auto_match/`, and its object in objdiff.

Build the original object once, then compile and compare just your function as you iterate:

```sh
ninja build/4D5308C9/obj/auto_match/func_82400E48.obj
python3 scripts/evaluate_candidate.py 0x82400E48 src/auto_match/func_82400E48.c \
  --compiler /path/to/X360/16.00.10224.00/cl.exe \
  --cflags /nologo /c /TC /O1
```

The evaluator prints the code match and saves the full objdiff result under the local lab directory. On Windows, it runs the compiler directly. On other platforms, it uses Wibo; set `WIBO` if the wrapper is not on your `PATH`. Set `OBJDIFF_CLI` if objdiff is not on your `PATH`. Try `/O2` when the assembly suggests a different optimization setting. Inspect objdiff's instruction and relocation differences before calling a function complete.

For a function that has no split yet, run `python3 scripts/isolate_functions.py 0xADDRESS`, reconfigure, and build its original object. Ghidra can supply the first C version. `scripts/prepare_full_game_task.py` can also package Ghidra C and assembly if you have generated the local analysis database.

## C++ classes

Much of the game is C++. RTTI gives the names of classes with virtual functions and their base classes, and their vtables appear in the `.rdata` assembly as `??_7ClassName@@6B@`. A method can be written as C++ instead of C when that makes its code clearer or helps it match:

1. Declare the class in a header under `include/`. Take the base classes, in order, from the class's `??_R2` base class array. Keep unknown fields as `unkXX` members at their offsets. Name methods after their vtable offset, such as `vf08`, until their purpose is known.
2. Rename the unit to `.cpp` in `config/4D5308C9/splits.txt` and `objects.json`, and define the method in that file. The build compiles `.cpp` units with `/TP`.
3. Compile the unit and replace the function's `fn_` name in `config/4D5308C9/symbols.txt` with the mangled name the compiler produced. objdiff compares functions by name, and the parameter types, `const` and class all change the mangled name.
4. Run the split again so the original object uses the new name, then evaluate the function. The evaluator finds the configured symbol name and adds `include/` and the source's directory to the compiler's include path; pass `/TP` instead of `/TC` in `--cflags`.

Compiling a header with `/GR` emits RTTI. Its `??_R1` names encode each base class's offset, so they should match the game's when the layout is right.

Declare functions and data that have no names yet inside `extern "C"` with their configured `fn_` or `lbl_` names, so calls to them match without renaming anything.

The compiler generates deleting destructors (`??_G`) wherever it emits a class's vtable, which happens where a constructor or destructor is defined or inlined. A unit for one can include the unit whose code emits the vtable. The game was also linked with identical functions folded together, so one function can appear in the vtables of several classes.

The `R1::Soundscape` event handles in `include/R1/Soundscape/` are an example: the state classes in `EventHandleState.h`, the context that forwards to them in `EventHandleContext.h`, and the `Singleton_c` template and heap operators they use.

The compiler names floating-point constants after their bits, such as `__real@00000000` for `0.0f`, in C and C++ alike. When a constant in `symbols.txt` still has an `lbl_` name, renaming it to the `__real@` form lets source use the literal value instead of an `extern`.

## Standard library code

The game uses the Visual C++ 2010 standard library, built without exception handling (`_HAS_EXCEPTIONS=0`), so a failed allocation calls `stdext::bad_alloc(0)._Raise()`. A function that is a standard library template, such as `std::vector<T>::_Insert_n`, can include the real header and instantiate that member explicitly. Some of the generated code depends on exactly how the headers are written, so this can match where a hand-written copy cannot.

The headers can't be distributed, so mark such a unit with `"vc_include": true` in `objects.json`; it is built only when `configure.py` gets `--vc-include` (see the [README](README.md)). To evaluate it, add `/D_HAS_EXCEPTIONS=0 /D_ALLOCA_S_MARKER_SIZE=8 /D_JBLEN=64 /D_JBTYPE=double /I<VC/include>` to `--cflags`. The last three defines stand in for x86-only parts of `malloc.h` and `setjmp.h`.

The game was built with link-time code generation, which inlined some helpers into one caller but not another. When the original calls `operator new` directly where a normal build calls `std::_Allocate`, specialize `std::allocator<T>::allocate` and `std::_Allocate` for the element type as `__forceinline` in the unit. `src/auto_match/func_825870E0.cpp` shows how.

Link-time code generation also inlined larger functions than the compiler does by itself, such as `std::vector<T>::_Reserve` into `push_back`. Adding the compiler's undocumented `/d2inlS1000` option to the unit's `extra_cflags` raises its inlining limit to match. Where the original calls a member out of line instead, declare that member's specialization without defining it. If the member's own unit isn't matched yet, define the specialization as `__forceinline` with a call to the member's `fn_` name instead. `src/auto_match/func_82269F20.cpp` is an example.

## Send the result

Commit the source, and include any split or object configuration changes the function needs. Keep a partial result as `NonMatching`; mark it `Matching` after the object matches completely. In your pull request, give the address, compiler flags, objdiff result and any useful type or class findings. A compilable improvement is worth sharing even if it is not a full match.

The checked-in progress report is generated from a configured build with `scripts/update_progress.sh`. It is refreshed when changes reach `main`.

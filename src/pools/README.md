# Constant pool primers

The game was linked with link-time code generation (LTCG). Under LTCG the compiler does not
give each float or double literal its own `__real@<bits>` constant. It loads a literal from

- its **home**, when the program has one: an element of a const object that some function
  reads at a constant address (0.0f, 1.0f, 0.5f and about 160 other values have one), or
- the **pool**, one block of constants for the whole link (`__pool@_0`). In the original it
  is `lbl_821954B0`: 0xA28 bytes, 521 floats, 63 doubles and the `{1.0f, -1.0f}` table of
  the compare-and-select sequence (`fcmpu; mfcr; rlwinm; rlwinm; or; lfsx; fsel`) at +0x28.

A function compiled on its own cannot reproduce such a load: it reads `lbl_821954B0 + 0x194`
where a separate compile reads `__real@40490fdb`. The four sources here are linked into the
LTCG link of a unit that has `"ltcg_pool": true` in `config/4D5308C9/objects.json`, after
the unit and its `"ltcg_units"`. LTCG generates code for the modules in reverse link order
and for a module's functions in reverse source order, and a pool slot is created when a
constant is first used, so they recreate the original's layout before the unit is compiled:

- `pool_821954B0.c` and `pool_821954B0_2.c`: one function per pool slot that returns the
  slot's constant, last slot first. The first module ends after slot +0x24, because the
  select table is appended when the code generation of the first module that needs it ends.
- `pool_homes.c`: the const objects that hold a home, at their original distances, with a
  function that reads each home. Only the home elements have their real values. One base
  register reaches every home in it that lies less than 32 KB from the function's last
  constant, which is how the original reads `lbl_82193AD8 - 0x2324`.
- `pool_homes_ext.c`: six homes that the original always reads through their own address,
  never through a neighbour's base register: 2.0f, 4.0f, 4.5f, 12.0f and 256.0f, and 100.0f
  at `__real@42c80000` (its name is not a C identifier, so it is defined as `home_82005748`
  and a unit that reads it maps that name in its `"pool_aliases"`). They are extern-visible
  consts, which take no part in the shared layout, so they are defined non-static in a
  module of their own and a filler holds their place in `pool_homes.c`.

The unit then writes plain literals (`x * 0.01f`, `x >= 0.0f ? a : b`) and gets the original's
addressing. Its `"pool_aliases"` maps `__pool@_0` to `lbl_821954B0`.

The sources are generated from the original executable's bytes and from the way its code
reads each slot (`lfs` = float, `lfd` = double). Do not edit them by hand: a changed slot
moves every later one.

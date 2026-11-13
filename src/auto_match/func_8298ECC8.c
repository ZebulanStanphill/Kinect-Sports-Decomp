typedef struct Compiler_8298ECC8 {
  int f0[5];
  int scope;
} Compiler_8298ECC8;

extern int fn_829873C0(Compiler_8298ECC8 *, int, void *, int, int, int, int, void *, int);

int fn_8298ECC8(Compiler_8298ECC8 *compiler, void *key, int kind, void *out)
{
  return fn_829873C0(compiler, 1, key, 0, 0, compiler->scope, kind, out, 0);
}

typedef struct Source_828F0DD0 {
  void *vtable;
  const char *data;
  unsigned int length;
  const void *defines;
  void *include;
} Source_828F0DD0;

extern char lbl_82027A00[];
extern int fn_828F0B58(Source_828F0DD0 *source, const char *function, const char *profile,
                       unsigned int flags, void **shader, void **errors, void **constants,
                       int unk);

int fn_828F0DD0(const char *data, unsigned int length, const void *defines, void *include,
                const char *function, const char *profile, unsigned int flags, void **shader,
                void **errors, void **constants)
{
  Source_828F0DD0 source;
  source.vtable = lbl_82027A00;
  source.data = data;
  source.length = length;
  source.defines = defines;
  source.include = include;
  return fn_828F0B58(&source, function, profile, flags, shader, errors, constants, 0);
}

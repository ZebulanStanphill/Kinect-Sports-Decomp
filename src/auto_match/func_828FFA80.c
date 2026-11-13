typedef char *va_list;
typedef struct { char pad[0x14]; unsigned int mod; } Operand_8293B8F8;
typedef struct { unsigned int lo : 7; unsigned int f : 5; unsigned int rest : 20; } X;
typedef struct Sh_8293E2D0 { char pad0[0x48]; int f48; char pad1[0xc]; int f58; char pad2[4]; unsigned flags; char pad3[0xd0]; int f134; char pad4[4]; int f13c; } Sh_8293E2D0;
typedef struct Dc_8293E2D0 { char pad[0x50]; int f50; } Dc_8293E2D0;
#define NAN(x) ((x) != (x))
typedef struct { char pad0[0x34]; int f34; char pad1[0x28]; unsigned f60; char pad2[0xbc]; unsigned f120; unsigned f124; unsigned f128; char pad3[0xc]; void *f138; } Obj_8293DD48;

extern void __cdecl __va_start(va_list *, ...);
extern void fn_828FF918(void *self, const char *fmt, va_list ap);

void fn_828FFA80(void *self, const char *fmt, ...)
{
  va_list ap;
  __va_start(&ap, fmt);
  fn_828FF918(self, fmt, ap);
}

typedef struct Vtable_828C01A0 { int (*f0)(void *, void *); } Vtable_828C01A0;
typedef struct Object_828C01A0 { Vtable_828C01A0 *vt; } Object_828C01A0;
void fn_828C01A0(int *a, int *b)
{
  Object_828C01A0 *c = (Object_828C01A0 *)b[4];
  if (c == 0) { a[4] = 0; return; }
  if (c == (Object_828C01A0 *)b) a[4] = ((Object_828C01A0 *)b[4])->vt->f0((Object_828C01A0 *)b[4], a); else a[4] = ((Object_828C01A0 *)b[4])->vt->f0((Object_828C01A0 *)b[4], 0);
}

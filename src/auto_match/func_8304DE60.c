typedef struct Strm_8304DE60 { struct Vt_8304DE60 *vt; } Strm_8304DE60;
typedef int (*Seek_8304DE60)(Strm_8304DE60 *, unsigned __int64, int, __int64 *);
struct Vt_8304DE60 { void *s[10]; Seek_8304DE60 seek; };
void fn_8304DE60(int param_1,unsigned int param_2)
{
  int iVar1;
  __int64 out;
  Strm_8304DE60 *s = *(Strm_8304DE60 **)(param_1 + 0x28);
  iVar1 = s->vt->seek(s, (unsigned __int64)param_2, 0, &out);
  if (iVar1 == 1) { *(unsigned int *)(param_1 + 0x44) = (unsigned int)out; *(unsigned int *)(param_1 + 0x54) = param_2 - (unsigned int)out; }
}

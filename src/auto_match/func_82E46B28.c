typedef struct { char pad[0x34]; unsigned int flags; unsigned __int64 value; } Obj;
int fn_82E46B28(Obj *p, unsigned __int64 *out) { int result=0; if (!out) result=0x80070057; else if (!(p->flags & 1)) result=0xc00d36c8; else *out=p->value; return result; }

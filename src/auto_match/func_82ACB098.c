typedef struct { char pad[16]; unsigned char flags; char pad2[3]; unsigned int value; } Obj;
extern unsigned char fn_82ACAFD8(Obj *);
int fn_82ACB098(Obj *p) { if (fn_82ACAFD8(p)) return 1; if ((p->flags & 1) && (p->value & 0x1fff) < 0x1fff) return 1; return 0; }

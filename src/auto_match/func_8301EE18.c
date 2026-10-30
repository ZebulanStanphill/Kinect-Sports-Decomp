typedef struct { char pad[0x84]; float f; char rest[8]; } Entry;
extern Entry lbl_83264610[];
float fn_8301EE18(int n) { return lbl_83264610[n].f; }

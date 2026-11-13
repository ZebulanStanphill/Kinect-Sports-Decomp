typedef struct { unsigned int lo, hi; } Key_827B4A68;
unsigned char fn_827B4A68(const Key_827B4A68 *a, const Key_827B4A68 *b)
{ if (b->hi != a->hi) return b->hi < a->hi; return b->lo < a->lo; }

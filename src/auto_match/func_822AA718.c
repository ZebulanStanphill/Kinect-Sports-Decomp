typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg. */
__vector4 __VMXGetReg(int n);

typedef struct Item_822AA718 {
    char pad0[0x14];
    float angle;
} Item_822AA718;

typedef struct List_822AA718 {
    Item_822AA718 **items;
    char pad4[0xc];
    int index;
} List_822AA718;

extern const float lbl_821CA45C[2];
extern __vector4 fn_8255A160(__vector4 origin, float angle, float radius);

__vector4 *fn_822AA718(__vector4 *out, List_822AA718 *list)
{
    *out = fn_8255A160(__VMXGetReg(77), list->items[list->index]->angle, lbl_821CA45C[1]);
    return out;
}

#include "stdext/xmemory.h"

extern "C" {
struct Map;
void fn_823D5D78(void *self);
}

struct MapNode {
    MapNode *left;
    MapNode *parent;
    MapNode *right;
    __int64 value[7];
    char color;
    char isnil;
};

struct Map {
    unsigned int comp;
    MapNode *head;
    unsigned int size;
    unsigned int alval;
};

struct Elem {
    unsigned int a[4];
    unsigned int b;
    unsigned int c;
};

struct Obj {
    char maps[0x80];
    Map map;
    Elem elems[28];
};

extern "C" Obj *fn_823D5C10(Obj *self)
{
    fn_823D5D78(self->maps + 0x0);
    fn_823D5D78(self->maps + 0x10);
    fn_823D5D78(self->maps + 0x20);
    fn_823D5D78(self->maps + 0x30);
    fn_823D5D78(self->maps + 0x40);
    fn_823D5D78(self->maps + 0x50);
    fn_823D5D78(self->maps + 0x60);
    fn_823D5D78(self->maps + 0x70);
    self->map.size = 0;
    self->map.head = std::_Allocate(1, (MapNode *)0);
    self->map.head->left = self->map.head;
    self->map.head->parent = self->map.head;
    self->map.head->right = self->map.head;
    self->map.head->color = 1;
    self->map.head->isnil = 1;
    { Elem *e = &self->elems[0]; e->b = 0; }
    { Elem *e = &self->elems[1]; e->b = 0; }
    { Elem *e = &self->elems[2]; e->b = 0; }
    { Elem *e = &self->elems[3]; e->b = 0; }
    { Elem *e = &self->elems[4]; e->b = 0; }
    { Elem *e = &self->elems[5]; e->b = 0; }
    { Elem *e = &self->elems[6]; e->b = 0; }
    { Elem *e = &self->elems[7]; e->b = 0; }
    { Elem *e = &self->elems[8]; e->b = 0; }
    { Elem *e = &self->elems[9]; e->b = 0; }
    { Elem *e = &self->elems[10]; e->b = 0; }
    { Elem *e = &self->elems[11]; e->b = 0; }
    { Elem *e = &self->elems[12]; e->b = 0; }
    { Elem *e = &self->elems[13]; e->b = 0; }
    { Elem *e = &self->elems[14]; e->b = 0; }
    { Elem *e = &self->elems[15]; e->b = 0; }
    { Elem *e = &self->elems[16]; e->b = 0; }
    { Elem *e = &self->elems[17]; e->b = 0; }
    { Elem *e = &self->elems[18]; e->b = 0; }
    { Elem *e = &self->elems[19]; e->b = 0; }
    { Elem *e = &self->elems[20]; e->b = 0; }
    { Elem *e = &self->elems[21]; e->b = 0; }
    { Elem *e = &self->elems[22]; e->b = 0; }
    { Elem *e = &self->elems[23]; e->b = 0; }
    { Elem *e = &self->elems[24]; e->b = 0; }
    { Elem *e = &self->elems[25]; e->b = 0; }
    { Elem *e = &self->elems[26]; e->b = 0; }
    { Elem *e = &self->elems[27]; e->b = 0; }
    return self;
}

// Initialize two list sentinels and the remaining members of this object.
#include <new>
#include "game/Allocator_825089A0.h"
struct Node_828C1700 { Node_828C1700 *next, *prev; };
extern "C" { extern char lbl_8202604C[]; void fn_828C0300(void *,void *,unsigned char); void *fn_82A1EF78(int); }
struct List_828C1700 { Node_828C1700 *head; int count; };
struct Object_828C1700 { void *vtable; List_828C1700 list1; char pad[0x14]; int field20; int field24; void *field28; Node_828C1700 *head2; int count2; int pad34; char field38[4]; };
extern "C" Object_828C1700 *fn_828C1700(Object_828C1700 *self) {
 unsigned char tag; unsigned char value;
 self->vtable = lbl_8202604C; List_828C1700 *list=&self->list1; list->count = 0;
 list->head = (Node_828C1700 *)fn_825089A0()->vf24(0x10,2);
 list->head->next = list->head; list->head->prev = list->head;
 self->field20 = 0; self->field28 = 0; self->count2 = 0;
 self->head2 = (Node_828C1700 *)fn_825089A0()->vf24(0xc,2); value=tag;
 self->head2->next = self->head2; self->head2->prev = self->head2;
 fn_828C0300(self->field38,&tag,value); self->field28 = fn_82A1EF78(2);
 return self;
}

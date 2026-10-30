typedef struct Element Element;typedef struct {void (*reserved[23])(void);int (*call)(Element *);} Vtable;struct Element {Vtable *vtable;char padding[0x38];};typedef struct {char padding[0x30];Element *elements;char padding2[12];int index;} Object;
int fn_82C0BD28(Object *object) {Element *element=&object->elements[object->index];return element->vtable->call(element);}

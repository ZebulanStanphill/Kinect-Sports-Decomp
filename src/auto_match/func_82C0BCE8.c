typedef struct Element Element;typedef struct {void (*reserved[21])(void);unsigned int (*call)(Element *);} Vtable;struct Element {Vtable *vtable;char padding[0x38];};typedef struct {char padding[0x30];Element *elements;char padding2[12];int index;} Object;
unsigned int fn_82C0BCE8(Object *object) {Element *element=&object->elements[object->index];return element->vtable->call(element);}

struct Owner {char padding[0xf0];int value;};struct Object {int padding;struct Owner *owner;char padding2[12];void *destination;};extern void fn_82671F28(struct Owner *,void *);
char fn_82672298(struct Object *object) {if(object->owner->value){fn_82671F28(object->owner,object->destination);return 0;}return 1;}

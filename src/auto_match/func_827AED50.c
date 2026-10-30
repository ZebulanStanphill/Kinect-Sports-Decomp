struct Owner {unsigned int reserved,count;};
struct Iterator {struct Owner *owner;unsigned int reserved,index,padding[4],valid;};
unsigned char fn_827AED50(struct Iterator *iterator) {return iterator->index>=iterator->owner->count || iterator->valid==0;}

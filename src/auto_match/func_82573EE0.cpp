struct Entry { int key; unsigned int value; };
struct Unit_82573EE0 { Entry *data; unsigned int size;  };
extern "C" unsigned int fn_82573EE0(Unit_82573EE0 *object,int key){ for (unsigned int i = 0; i < object->size; ++i) if (key == object->data[i].key) return object->data[i].value; return 0; }

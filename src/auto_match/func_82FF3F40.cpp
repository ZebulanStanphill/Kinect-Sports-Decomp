extern "C" short fn_82FF4508(void *);
struct Unit_82FF3F40 { char pad[128]; short first, pad2, second;  };
extern "C" short fn_82FF3F40(Unit_82FF3F40 *object){ return fn_82FF4508(&object->first) + object->second; }

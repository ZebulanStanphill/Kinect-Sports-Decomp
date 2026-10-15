// R1::Soundscape::Singleton_c. The class name comes from RTTI; member names are
// placeholders.

#ifndef R1_SOUNDSCAPE_SINGLETON_H
#define R1_SOUNDSCAPE_SINGLETON_H

namespace R1 {
namespace Soundscape {

template <class T>
class Singleton_c {
public:
    static T *GetInstance()
    {
        if (s_instance == 0) {
            s_instance = new T;
        }
        return s_instance;
    }

private:
    static T *s_instance;
};

template <class T>
T *Singleton_c<T>::s_instance;

} // namespace Soundscape
} // namespace R1

#endif

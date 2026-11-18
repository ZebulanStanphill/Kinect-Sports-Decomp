#include <vector>

struct Element_822A3128 {
    int data[7];
    Element_822A3128 &operator=(const Element_822A3128 &other);
    ~Element_822A3128();
};

extern "C" void *fn_82295A48(void *, const void *);
extern "C" void fn_82297DB0(void *, bool, unsigned int);

inline Element_822A3128 &Element_822A3128::operator=(const Element_822A3128 &other)
{
    fn_82295A48(this, &other);
    return *this;
}

inline Element_822A3128::~Element_822A3128()
{
    fn_82297DB0(this, true, 0);
}

template <> void std::vector<Element_822A3128>::push_back(const Element_822A3128 &);

struct Manager_822A1BC8 {
    char padding[8];
    std::vector<Element_822A3128> items; /* 0x08 */

    void SetItems(const std::vector<Element_822A3128> &input)
    {
        items.clear();
        for (unsigned int index = 0; index < input.size(); ++index) {
            items.push_back(input[index]);
        }
    }
};

struct Globals_822A1BC8 {
    char padding[0x90];
    Manager_822A1BC8 *manager;
};

extern "C" Globals_822A1BC8 lbl_831D1298;

extern "C" void fn_822A1BC8(const std::vector<Element_822A3128> &input)
{
    lbl_831D1298.manager->SetItems(input);
}

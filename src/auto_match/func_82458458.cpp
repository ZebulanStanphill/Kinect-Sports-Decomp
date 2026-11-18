// Finds the first entry of the track that is not older than `age`: std::lower_bound over the
// entries' times (an entry converts to its time).
#include <algorithm>
#include <vector>

struct Entry_82458458 {
    float time;  /* 0x00 */
    int data[4]; /* 0x04 */

    operator float() const
    {
        return time;
    }
};

class Track_82458458
{
  public:
    std::vector<Entry_82458458>::iterator FindSince(float age);

    int unknown00;
    float now; /* 0x04 */
    char padding08[0x10];
    std::vector<Entry_82458458> entries; /* 0x18 */
};

std::vector<Entry_82458458>::iterator Track_82458458::FindSince(float age)
{
    return std::lower_bound(entries.begin(), entries.end(), now - age);
}

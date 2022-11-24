#include <set>
#include <type_traits>
#include <concepts>

template<class T>
std::set<T>  operator+ (const std::set<T> &C , const std::set<T> &D )
{
    std::set<T> s;

    while (C.begin() != C.end() && D.begin() != D.end())
        {
            s.insert(*C.begin());
            s.insert(*D.begin());
            ++C.begin();
            ++D.begin();
        }
    return s;
}

template<class T>
std::set<T>  operator- (const std::set<T> &C , const std::set<T> &D )
{
    std::set<int> s;
    for (std::set<int>::iterator it=C.begin(); it!=C.end(); ++it)
    {
        if(!D.find(it))s.insert(C(it));
    }

    return s;
}

template<class T>
std::set<T>  operator^ (const std::set<T> &C , const std::set<T> &D )
{
    
    std::set<T> s;
    while (C.begin() != C.end() && D.begin() != D.end())
        if (*C.begin() < *D.begin())
        {
            *s.begin() = *C.begin();
            ++C.begin();
            ++s.begin();
        }
    else if (*D.begin() < *C.begin())
        {
            *s.begin() = *D.begin();
            ++D.begin();
            ++s.begin();
        }
    else
        {
            ++C.begin();
            ++D.begin();
        }
    return s;
}

template<class T>
std::set<T>  operator* (const std::set<T> &C , const std::set<T> &D )
{
    
    std::set<T> s;

    while (C.begin() != C.end() && D.begin() != D.end())
        {
            s.insert(*C.begin()+*D.begin());
            ++C.begin();
            ++D.begin();
        }
    return s;
}

template<class T>
std::set<T>  operator^ (const std::set<T> &C , const int D )
{
    
    std::set<T> s;
    int i = 0;
    while (C.begin() != C.end()  )
        {
            s.insert(*C.begin()*D);
            ++C.begin();
        }
    return s;
}
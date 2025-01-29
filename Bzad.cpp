#include <exception>
#include <iostream>
class Exception: public std::exception{
    private:
        std::string opis;
    public:
        Exception(std::string opis):opis(opis){}
        const char* what() const noexcept  override {
            return opis.c_str();
        }
};

class WrongType:public Exception{
    public:
        WrongType():Exception("Broj ne može biti negativan"){}
};

class NoElements : public Exception {
    public :
        NoElements (): Exception("U voznom parku nema vozila") {}
};

class NoSpaceLeft : public Exception {
    public :
        NoSpaceLeft (): Exception("Nema vise slobodnog prostora ") {}
};

class BusyDriver : public Exception {
    public :
        BusyDriver (): Exception("Vozač  je zauzet ") {}
};
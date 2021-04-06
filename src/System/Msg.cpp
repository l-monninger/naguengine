#include <string>
#include <vector>

class MsgType{

    public:


    private:

    friend class Msg;

}

class Msg {

    public:
        std::string setMsg(const std::string txt, const MsgType& type);

    private:
        std::string txt;
        MsgType* type;

    friend class MsgBus;

}

class MsgBus {

    public:
        std::postMsg(const Msg& msg);

    private:
        std::vector<Msg> bus;

}
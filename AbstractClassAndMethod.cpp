#include <iostream>
using namespace std;
    
// yadi kunai class ma method haru xa tr implemented xaina bhane tyo class abstract class hunxa.
class Connection {

    // yadi kunai pani method implement xaina bhane tyo abstract method hunxa.
    // example is below:
    public:
    virtual void connect() = 0;
    virtual void query() = 0;
    virtual void disconnect() = 0;
};

class MongoDB:Connection{
    public:
    void connect(){
        cout<<"MongoDB connection"<<endl;
    }

    void query(){
        cout<<"MongoDB query"<<endl;
    }

    void disconnect(){
        cout<<"MongoDB disconnection"<<endl;
    }
};

class Postgres:Connection{
    public:
    void connect(){
        cout<<"Postgres connection"<<endl;
    }

    void query(){
        cout<<"Postgres query"<<endl;
    }

    void disconnect(){
        cout<<"Postgres disconnection"<<endl;
    }
};

class MySQL:Connection{
    public:
    void connect(){
        cout<<"MySQL connection"<<endl;
    }

    void query(){
        cout<<"MySQL query"<<endl;
    }

    void disconnect(){
        cout<<"MySQL disconnection"<<endl;
    }
};

int main() {

    MongoDB mg;
    mg.connect();
    mg.query();
    mg.disconnect();

    Postgres pg;
    pg.connect();
    pg.query();
    pg.disconnect();

    MySQL ms;
    ms.connect();
    ms.query();
    ms.disconnect();
    
    return 0;
}
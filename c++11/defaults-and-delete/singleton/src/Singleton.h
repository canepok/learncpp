

class Singleton
{
public:
    static Singleton& instance()
    {
        // Thread-safe in c++11
        static Singleton s;
        return s;
    }
    
    // delete copy and move constructors and assign operators
    Singleton(Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&) = delete;
    Singleton& operator=(Singleton&&) = delete;
 
protected:
    Singleton() {}
    ~Singleton() {} 
};

//Header File
#ifndef players_h
#define players_h

    class players
{
    private:
        int PNum;
        string PName;
    
    public:
        player(string a, int b);
        string getPName();
        void setPName(string );
        int getPNum();
        void setPNum(int );
};

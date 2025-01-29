class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;
    int itsStation;
};
int main()
{
    TV myTV;
    myTV.itsStation = 9;
    myTV.SetStation(10);
    TV myOtherTV;
}

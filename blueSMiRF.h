//
// Created by anant on 3/15/15.
//

#ifndef _BLUESMIRF_LIBRARY_BLUESMIRF_H_
#define _BLUESMIRF_LIBRARY_BLUESMIRF_H_


class blueSMiRF {
private:
    int _tXPin;
    int _rXPin;
    int _baud;
private:
    bool _cmdMode = false;
    void toggleCMDMode();
public:
    blueSMiRF(int _tXPin, int _rXPin);
    blueSMiRF(int _tXPin, int _rXPin, int _baud);

    int getStatus();


};


#endif //_BLUESMIRF_LIBRARY_BLUESMIRF_H_

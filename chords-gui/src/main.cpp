#include <QtGui/QApplication>
#include "CMakeQt.h"

#include <AL/al.h>
#include <AL/alc.h>
//#include <OpenAL/al.h>
//#include <OpenAL/alc.h>
#include <iostream>

using namespace std;

const int SRATE = 44100;
const int SSIZE = 1024;

ALbyte buffer[22050];
ALint sample;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);



    // audio
    ALCdevice* m_device = alcOpenDevice(NULL);

    if ( !m_device )
        std::cout << "Couldn't open default OpenAL device." << std::endl;
    else
        std::cout << "opened the device" << std::endl;

//    alGetError();
//    ALCdevice *device = alcCaptureOpenDevice(NULL, SRATE, AL_FORMAT_STEREO16, SSIZE);
//    if (alGetError() != AL_NO_ERROR) {
//        return 0;
//    }
//    alcCaptureStart(device);

//    while (true) {
//        alcGetIntegerv(device, ALC_CAPTURE_SAMPLES, (ALCsizei)sizeof(ALint), &sample);
//        alcCaptureSamples(device, (ALCvoid *)buffer, sample);

//        // ... do something with the buffer
//    }

//    alcCaptureStop(device);
//    alcCaptureCloseDevice(device);



    CMakeQt w;
    w.show();
    return app.exec();
}


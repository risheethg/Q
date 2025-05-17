#include "AudioProcessor.h"
#include "Log.h"


PaError InitializeAudioProcessor(void) {
	LOG_INFO("Initializing AudioProcessor...")
	PaError Error = Pa_Initialize();
	if (Error != paNoError) {
		LOG_ERROR("%s", Pa_GetErrorText(Error))
		exit(1);
	}
	return Error;
}

int QueryDevices(void) {
	LOG_INFO("Querrying Audio Devices available...")
	int devices = Pa_GetDeviceCount();
	if (devices < 0) {
		LOG_ERROR("Failed to fetch Audio Devices!")
		exit(1);
	}
	else if (devices == 0) {
		LOG_ERROR("No Audio Devices available!")
		exit(1);
	}
	LOG_INFO("%d Audio Devices available", devices)
}	
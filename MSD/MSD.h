#pragma once

__int64 hook_GET_AUDIO_BUFFER_AND_SET_SIZE(__int64* a1, byte** BUFFER, int size);
bool valid_data(byte* buffer, int size);
void dump_data();
__int64 hook_TRANSFER_MIXED_AUDIO_TO_SOUND_BUFFER(__int64* a1);
int main(int argc, char* argv[]);
bool cstrIsDigits(const char* string);
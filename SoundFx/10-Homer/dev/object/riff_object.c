#include "riff_object.h"
#include "../banks/bank2.h"
#include "../banks/bank3.h"
#include "../banks/bank4.h"
#include "../banks/bank5.h"
#include "../banks/bank6.h"
#include "../banks/bank7.h"

const unsigned char *riff_sample_data[] =
{
	right01_wav_pcmenc,
	right02_wav_pcmenc,
	right03_wav_pcmenc,
	wrong01_wav_pcmenc,
	wrong02_wav_pcmenc,
	wrong03_wav_pcmenc,
};

const unsigned char riff_sample_bank[] =
{
	right01_wav_pcmenc_bank,
	right02_wav_pcmenc_bank,
	right03_wav_pcmenc_bank,
	wrong01_wav_pcmenc_bank,
	wrong02_wav_pcmenc_bank,
	wrong03_wav_pcmenc_bank,
};
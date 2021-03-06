#define ZS_VOLUME_STATIC 1

namespace ZSpire {
	class AudioSource
	{

	private:

		unsigned int mSourceID;
		unsigned int mBufferID;

	public:

		ZSVECTOR3 position;

		void setGain(float gain);
		void setLoopingEnabled(bool enabled);

		bool Open(const char* Filename);
		void Play();
		void Close();
		void setTranslation(ZSVECTOR3 position);
		void Stop();
	};
}
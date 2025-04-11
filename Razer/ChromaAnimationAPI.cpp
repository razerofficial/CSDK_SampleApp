#include "ChromaAnimationAPI.h"
#include "UnicodeChromaAnimationAPI.h"
#include "ChromaLogger.h"
#include "VerifyLibrarySignature.h"
#include <iostream>
#include <tchar.h>


using namespace std;
using namespace ChromaSDK::Implementation;

namespace ChromaSDK {

	bool ChromaAnimationAPI::_sIsInitializedAPI = false;
	bool ChromaAnimationAPI::_sInitialized = false;

	int ChromaAnimationAPI::InitAPI()
	{
		if (_sIsInitializedAPI)
		{
			return RZRESULT_SUCCESS;
		}

		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}

		RZRESULT result = UnicodeChromaAnimationAPI::InitAPI();
		if (result == RZRESULT_SUCCESS)
		{
			_sIsInitializedAPI = true;
		}
		return result;
	}

	bool ChromaAnimationAPI::GetIsInitializedAPI()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::GetIsInitializedAPI();
	}

	int ChromaAnimationAPI::UninitAPI()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::UninitAPI();
		if (result == RZRESULT_SUCCESS)
		{
			_sIsInitializedAPI = false;
		}
		return result;
	}

#pragma region API declare prototypes

	/*
		Return the sum of colors
	*/
	int ChromaAnimationAPI::AddColor(const int color1, const int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddColor(color1, color2);
	}
	/*
		Adds a frame to the `Chroma` animation and sets the `duration` (in seconds). 
		The `color` is expected to be an array of the dimensions for the `deviceType/device`. 
		The `length` parameter is the size of the `color` array. For `EChromaSDKDevice1DEnum` 
		the array size should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array 
		size should be `MAX ROW` times `MAX COLUMN`. Returns the animation id upon 
		success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::AddFrame(int animationId, float duration, int* colors, int length)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddFrame(animationId, duration, colors, length);
	}
	/*
		Add source color to target where color is not black for frame id, reference 
		source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Add source color to target where color is not black for all frames, reference 
		source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Add source color to target where color is not black for all frames, reference 
		source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Add source color to target where color is not black for all frames starting 
		at offset for the length of the source, reference source and target by 
		id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Add source color to target where color is not black for all frames starting 
		at offset for the length of the source, reference source and target by 
		name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Add source color to target where color is not black for frame id, reference 
		source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Add source color to target where color is not black for the source frame 
		and target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Add source color to target where color is not black for the source frame 
		and target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Add source color to target where the target color is not black for all frames, 
		reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Add source color to target where the target color is not black for all frames, 
		reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Add source color to target where the target color is not black for all frames 
		starting at offset for the length of the source, reference source and target 
		by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Add source color to target where the target color is not black for all frames 
		starting at offset for the length of the source, reference source and target 
		by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Add source color to target where target color is not blank from the source 
		frame to the target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Add source color to target where target color is not blank from the source 
		frame to the target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AddNonZeroTargetAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Append all source frames to the target animation, reference source and target 
		by id.
	*/
	void ChromaAnimationAPI::AppendAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AppendAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Append all source frames to the target animation, reference source and target 
		by name.
	*/
	void ChromaAnimationAPI::AppendAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::AppendAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::AppendAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::AppendAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		`PluginClearAll` will issue a `CLEAR` effect for all devices.
	*/
	void ChromaAnimationAPI::ClearAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ClearAll();
	}
	/*
		`PluginClearAnimationType` will issue a `CLEAR` effect for the given device.
	*/
	void ChromaAnimationAPI::ClearAnimationType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ClearAnimationType(deviceType, device);
	}
	/*
		`PluginCloseAll` closes all open animations so they can be reloaded from 
		disk. The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::CloseAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CloseAll();
	}
	/*
		Closes the `Chroma` animation to free up resources referenced by id. Returns 
		the animation id upon success. Returns negative one upon failure. This 
		might be used while authoring effects if there was a change necessitating 
		re-opening the animation. The animation id can no longer be used once closed.
	*/
	int ChromaAnimationAPI::CloseAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseAnimationD(animationId);
	}
	/*
		Closes the `Chroma` animation referenced by name so that the animation can 
		be reloaded from disk.
	*/
	void ChromaAnimationAPI::CloseAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CloseAnimationName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseAnimationNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseAnimationNameD(path);
	}
	/*
		`PluginCloseComposite` closes a set of animations so they can be reloaded 
		from disk. The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::CloseComposite(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CloseComposite(name);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CloseCompositeD(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CloseCompositeD(name);
	}
	/*
		Copy source animation to target animation for the given frame. Source and 
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy source animation to target animation for the given frame. Source and 
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Copy animation to named target animation in memory. If target animation 
		exists, close first. Source is referenced by id.
	*/
	int ChromaAnimationAPI::CopyAnimation(int sourceAnimationId, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyAnimation(sourceAnimationId, targetAnimation);
	}
	/*
		Copy animation to named target animation in memory. If target animation 
		exists, close first. Source is referenced by name.
	*/
	void ChromaAnimationAPI::CopyAnimationName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyAnimationName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyAnimationNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyAnimationNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy blue channel to other channels for all frames. Intensity range is 0.0 
		to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyBlueChannelAllFrames(int animationId, float redIntensity, float greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyBlueChannelAllFrames(animationId, redIntensity, greenIntensity);
	}
	/*
		Copy blue channel to other channels for all frames. Intensity range is 0.0 
		to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyBlueChannelAllFramesName(const wchar_t* path, float redIntensity, float greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyBlueChannelAllFramesName(path, redIntensity, greenIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyBlueChannelAllFramesNameD(const wchar_t* path, double redIntensity, double greenIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyBlueChannelAllFramesNameD(path, redIntensity, greenIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is 
		0.0 to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyGreenChannelAllFrames(int animationId, float redIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyGreenChannelAllFrames(animationId, redIntensity, blueIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is 
		0.0 to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyGreenChannelAllFramesName(const wchar_t* path, float redIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyGreenChannelAllFramesName(path, redIntensity, blueIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyGreenChannelAllFramesNameD(const wchar_t* path, double redIntensity, double blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyGreenChannelAllFramesNameD(path, redIntensity, blueIntensity);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for the given frame. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for all frames. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFrames(int sourceAnimationId, int targetAnimationId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFrames(sourceAnimationId, targetAnimationId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for all frames. Reference the source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesName(sourceAnimation, targetAnimation, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyKeyColorAllFramesNameD(sourceAnimation, targetAnimation, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for all frames, starting at the offset for the length of the source animation. 
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesOffset(int sourceAnimationId, int targetAnimationId, int rzkey, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffset(sourceAnimationId, targetAnimationId, rzkey, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for all frames, starting at the offset for the length of the source animation. 
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyKeyColorAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int rzkey, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffsetName(sourceAnimation, targetAnimation, rzkey, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double rzkey, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyKeyColorAllFramesOffsetNameD(sourceAnimation, targetAnimation, rzkey, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for the given frame.
	*/
	void ChromaAnimationAPI::CopyKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeyColorName(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyKeyColorNameD(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation for the given frame. Reference the source and target by 
		id.
	*/
	void ChromaAnimationAPI::CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColor(sourceAnimationId, targetAnimationId, frameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation for all frames. Reference the source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorAllFrames(sourceAnimationId, targetAnimationId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation for all frames. Reference the source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeysColorAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorAllFramesName(sourceAnimation, targetAnimation, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation for the given frame. Reference the source and target by 
		name.
	*/
	void ChromaAnimationAPI::CopyKeysColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorName(sourceAnimation, targetAnimation, frameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation from the source frame to the target frame. Reference the 
		source and target by id.
	*/
	void ChromaAnimationAPI::CopyKeysColorOffset(int sourceAnimationId, int targetAnimationId, int sourceFrameId, int targetFrameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorOffset(sourceAnimationId, targetAnimationId, sourceFrameId, targetFrameId, keys, size);
	}
	/*
		Copy animation color for a set of keys from the source animation to the 
		target animation from the source frame to the target frame. Reference the 
		source and target by name.
	*/
	void ChromaAnimationAPI::CopyKeysColorOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int sourceFrameId, int targetFrameId, const int* keys, int size)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyKeysColorOffsetName(sourceAnimation, targetAnimation, sourceFrameId, targetFrameId, keys, size);
	}
	/*
		Copy source animation to target animation for the given frame. Source and 
		target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all 
		frames. Reference source and target by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all 
		frames. Reference source and target by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all 
		frames starting at the offset for the length of the source animation. The 
		source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy nonzero colors from a source animation to a target animation for all 
		frames starting at the offset for the length of the source animation. The 
		source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Copy nonzero colors from source animation to target animation for the specified 
		frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysNameD(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation from 
		the source frame to the target offset frame. Source and target are referenced 
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation from 
		the source frame to the target offset frame. Source and target are referenced 
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for the given frame where color is not zero.
	*/
	void ChromaAnimationAPI::CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy animation key color from the source animation to the target animation 
		for the given frame where color is not zero.
	*/
	void ChromaAnimationAPI::CopyNonZeroKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroKeyColorName(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroKeyColorNameD(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for the specified frame. Source and target 
		are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for all frames. Source and target are referenced 
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for all frames. Source and target are referenced 
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for all frames. Source and target are referenced 
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for all frames starting at the target offset 
		for the length of the source animation. Source and target animations are 
		referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for the specified frame. The source and target 
		are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysNameD(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for the specified source frame and target offset 
		frame. The source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is nonzero for the specified source frame and target offset 
		frame. The source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is zero for all frames. Source and target are referenced 
		by id.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero colors from the source animation to the target animation where 
		the target color is zero for all frames. Source and target are referenced 
		by name.
	*/
	void ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyNonZeroTargetZeroAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy red channel to other channels for all frames. Intensity range is 0.0 
		to 1.0. Reference the animation by id.
	*/
	void ChromaAnimationAPI::CopyRedChannelAllFrames(int animationId, float greenIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyRedChannelAllFrames(animationId, greenIntensity, blueIntensity);
	}
	/*
		Copy green channel to other channels for all frames. Intensity range is 
		0.0 to 1.0. Reference the animation by name.
	*/
	void ChromaAnimationAPI::CopyRedChannelAllFramesName(const wchar_t* path, float greenIntensity, float blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyRedChannelAllFramesName(path, greenIntensity, blueIntensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyRedChannelAllFramesNameD(const wchar_t* path, double greenIntensity, double blueIntensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyRedChannelAllFramesNameD(path, greenIntensity, blueIntensity);
	}
	/*
		Copy zero colors from source animation to target animation for the frame. 
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy zero colors from source animation to target animation for all frames. 
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy zero colors from source animation to target animation for all frames. 
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy zero colors from source animation to target animation for all frames 
		starting at the target offset for the length of the source animation. Source 
		and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Copy zero colors from source animation to target animation for all frames 
		starting at the target offset for the length of the source animation. Source 
		and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyZeroAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Copy zero colors from source animation to target animation for the frame. 
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Copy zero colors from source animation to target animation for the frame 
		id starting at the target offset for the length of the source animation. 
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Copy zero colors from source animation to target animation for the frame 
		id starting at the target offset for the length of the source animation. 
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Copy zero key color from source animation to target animation for the specified 
		frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroKeyColor(sourceAnimationId, targetAnimationId, frameId, rzkey);
	}
	/*
		Copy zero key color from source animation to target animation for the specified 
		frame. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroKeyColorName(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyZeroKeyColorNameD(sourceAnimation, targetAnimation, frameId, rzkey);
	}
	/*
		Copy nonzero color from source animation to target animation where target 
		is zero for the frame. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Copy nonzero color from source animation to target animation where target 
		is zero for all frames. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Copy nonzero color from source animation to target animation where target 
		is zero for all frames. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Copy nonzero color from source animation to target animation where target 
		is zero for the frame. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::CopyZeroTargetAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::CopyZeroTargetAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateChromaLinkEffect(ChromaSDK::ChromaLink::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateChromaLinkEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateEffect(RZDEVICEID deviceId, ChromaSDK::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateEffect(deviceId, effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateHeadsetEffect(ChromaSDK::Headset::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateHeadsetEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateKeyboardEffect(ChromaSDK::Keyboard::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateKeyboardEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateKeypadEffect(ChromaSDK::Keypad::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateKeypadEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateMouseEffect(ChromaSDK::Mouse::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateMouseEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreCreateMousepadEffect(ChromaSDK::Mousepad::EFFECT_TYPE effect, PRZPARAM pParam, RZEFFECTID* pEffectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreCreateMousepadEffect(effect, pParam, pEffectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreDeleteEffect(RZEFFECTID effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreDeleteEffect(effectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreInit()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_FAILED;
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreInit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreInitSDK(ChromaSDK::APPINFOTYPE* appInfo)
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_FAILED;
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreInitSDK(appInfo);
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreIsActive(BOOL& active)
	{
		if (!_sIsInitializedAPI)
		{
			active = false;
			return -1;
		}
		if (!_sInitialized)
		{
			active = false;
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreIsActive(active);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreIsConnected(ChromaSDK::DEVICE_INFO_TYPE& deviceInfo)
	{
		if (!_sIsInitializedAPI)
		{
			deviceInfo.Connected = false;
			return -1;
		}
		if (!_sInitialized)
		{
			deviceInfo.Connected = false;
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreIsConnected(deviceInfo);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreQueryDevice(RZDEVICEID deviceId, ChromaSDK::DEVICE_INFO_TYPE& deviceInfo)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreQueryDevice(deviceId, deviceInfo);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreSetEffect(RZEFFECTID effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreSetEffect(effectId);
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreSetEventName(LPCTSTR name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CoreSetEventName(name);
	}
	/*
		Begin broadcasting Chroma RGB data using the stored stream key as the endpoint. 
		Intended for Cloud Gaming Platforms, restore the streaming key when the 
		game instance is launched to continue streaming. streamId is a null terminated 
		string streamKey is a null terminated string StreamGetStatus() should return 
		the READY status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamBroadcast(const char* streamId, const char* streamKey)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamBroadcast(streamId, streamKey);
	}
	/*
		End broadcasting Chroma RGB data. StreamGetStatus() should return the BROADCASTING 
		status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamBroadcastEnd()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamBroadcastEnd();
	}
	/*
		shortcode: Pass the address of a preallocated character buffer to get the 
		streaming auth code. The buffer should have a minimum length of 6. length: 
		Length will return as zero if the streaming auth code could not be obtained. 
		If length is greater than zero, it will be the length of the returned streaming 
		auth code. Once you have the shortcode, it should be shown to the user 
		so they can associate the stream with their Razer ID StreamGetStatus() 
		should return the READY status before invoking this method. platform: is 
		the null terminated string that identifies the source of the stream: { 
		GEFORCE_NOW, LUNA, STADIA, GAME_PASS } title: is the null terminated string 
		that identifies the application or game.
	*/
	void ChromaAnimationAPI::CoreStreamGetAuthShortcode(char* shortcode, unsigned char* length, const wchar_t* platform, const wchar_t* title)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetAuthShortcode(shortcode, length, platform, title);
	}
	/*
		focus: Pass the address of a preallocated character buffer to get the stream 
		focus. The buffer should have a length of 48 length: Length will return 
		as zero if the stream focus could not be obtained. If length is greater 
		than zero, it will be the length of the returned stream focus.
	*/
	bool ChromaAnimationAPI::CoreStreamGetFocus(char* focus, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return false;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetFocus(focus, length);
	}
	/*
		Intended for Cloud Gaming Platforms, store the stream id to persist in user 
		preferences to continue streaming if the game is suspended or closed. shortcode: 
		The shortcode is a null terminated string. Use the shortcode that authorized 
		the stream to obtain the stream id. streamId should be a preallocated buffer 
		to get the stream key. The buffer should have a length of 48. length: Length 
		will return zero if the key could not be obtained. If the length is greater 
		than zero, it will be the length of the returned streaming id. Retrieve 
		the stream id after authorizing the shortcode. The authorization window 
		will expire in 5 minutes. Be sure to save the stream key before the window 
		expires. StreamGetStatus() should return the READY status to use this method.
	*/
	void ChromaAnimationAPI::CoreStreamGetId(const char* shortcode, char* streamId, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetId(shortcode, streamId, length);
	}
	/*
		Intended for Cloud Gaming Platforms, store the streaming key to persist 
		in user preferences to continue streaming if the game is suspended or closed. 
		shortcode: The shortcode is a null terminated string. Use the shortcode 
		that authorized the stream to obtain the stream key. If the status is in 
		the BROADCASTING or WATCHING state, passing a NULL shortcode will return 
		the active streamId. streamKey should be a preallocated buffer to get the 
		stream key. The buffer should have a length of 48. length: Length will 
		return zero if the key could not be obtained. If the length is greater 
		than zero, it will be the length of the returned streaming key. Retrieve 
		the stream key after authorizing the shortcode. The authorization window 
		will expire in 5 minutes. Be sure to save the stream key before the window 
		expires. StreamGetStatus() should return the READY status to use this method.
	*/
	void ChromaAnimationAPI::CoreStreamGetKey(const char* shortcode, char* streamKey, unsigned char* length)
	{
		if (!_sIsInitializedAPI)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		if (!_sInitialized)
		{
			if (length)
			{
				*length = 0;
			}
			return;
		}
		UnicodeChromaAnimationAPI::CoreStreamGetKey(shortcode, streamKey, length);
	}
	/*
		Returns StreamStatus, the current status of the service
	*/
	ChromaSDK::Stream::StreamStatusType ChromaAnimationAPI::CoreStreamGetStatus()
	{
		if (!_sIsInitializedAPI)
		{
			return ChromaSDK::Stream::StreamStatusType::SERVICE_OFFLINE;
		}
		if (!_sInitialized)
		{
			return ChromaSDK::Stream::StreamStatusType::SERVICE_OFFLINE;
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetStatus();
	}
	/*
		Convert StreamStatusType to a printable string
	*/
	const char* ChromaAnimationAPI::CoreStreamGetStatusString(ChromaSDK::Stream::StreamStatusType status)
	{
		if (!_sIsInitializedAPI)
		{
			return "";
		}
		if (!_sInitialized)
		{
			return "";
		}
		return UnicodeChromaAnimationAPI::CoreStreamGetStatusString(status);
	}
	/*
		This prevents the stream id and stream key from being obtained through the 
		shortcode. This closes the auth window. shortcode is a null terminated 
		string. StreamGetStatus() should return the READY status to use this method. 
		returns success when shortcode has been released
	*/
	bool ChromaAnimationAPI::CoreStreamReleaseShortcode(const char* shortcode)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamReleaseShortcode(shortcode);
	}
	/*
		The focus is a null terminated string. Set the focus identifer for the application 
		designated to automatically change the streaming state. Returns true on 
		success.
	*/
	bool ChromaAnimationAPI::CoreStreamSetFocus(const char* focus)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamSetFocus(focus);
	}
	/*
		Returns true if the Chroma streaming is supported. If false is returned, 
		avoid calling stream methods.
	*/
	bool ChromaAnimationAPI::CoreStreamSupportsStreaming()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamSupportsStreaming();
	}
	/*
		Begin watching the Chroma RGB data using streamID parameter. streamId is 
		a null terminated string. StreamGetStatus() should return the READY status 
		to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamWatch(const char* streamId, unsigned long long timestamp)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamWatch(streamId, timestamp);
	}
	/*
		End watching Chroma RGB data stream. StreamGetStatus() should return the 
		WATCHING status to use this method.
	*/
	bool ChromaAnimationAPI::CoreStreamWatchEnd()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::CoreStreamWatchEnd();
	}
	/*
		Direct access to low level API.
	*/
	RZRESULT ChromaAnimationAPI::CoreUnInit()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::CoreUnInit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;

	}
	/*
		Creates a `Chroma` animation at the given path. The `deviceType` parameter 
		uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter uses 
		`EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer, respective 
		to the `deviceType`. Returns the animation id upon success. Returns negative 
		one upon failure. Saves a `Chroma` animation file with the `.chroma` extension 
		at the given path. Returns the animation id upon success. Returns negative 
		one upon failure.
	*/
	int ChromaAnimationAPI::CreateAnimation(const wchar_t* path, int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CreateAnimation(path, deviceType, device);
	}
	/*
		Creates a `Chroma` animation in memory without creating a file. The `deviceType` 
		parameter uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter 
		uses `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer, 
		respective to the `deviceType`. Returns the animation id upon success. 
		Returns negative one upon failure. Returns the animation id upon success. 
		Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::CreateAnimationInMemory(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CreateAnimationInMemory(deviceType, device);
	}
	/*
		Create a device specific effect.
	*/
	RZRESULT ChromaAnimationAPI::CreateEffect(RZDEVICEID deviceId, ChromaSDK::EFFECT_TYPE effect, int* colors, int size, ChromaSDK::FChromaSDKGuid* effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::CreateEffect(deviceId, effect, colors, size, effectId);
	}
	/*
		Delete an effect given the effect id.
	*/
	RZRESULT ChromaAnimationAPI::DeleteEffect(const ChromaSDK::FChromaSDKGuid& effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::DeleteEffect(effectId);
	}
	/*
		Duplicate the first animation frame so that the animation length matches 
		the frame count. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateFirstFrame(int animationId, int frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFirstFrame(animationId, frameCount);
	}
	/*
		Duplicate the first animation frame so that the animation length matches 
		the frame count. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateFirstFrameName(const wchar_t* path, int frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFirstFrameName(path, frameCount);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateFirstFrameNameD(const wchar_t* path, double frameCount)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::DuplicateFirstFrameNameD(path, frameCount);
	}
	/*
		Duplicate all the frames of the animation to double the animation length. 
		Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on. 
		The animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFrames(animationId);
	}
	/*
		Duplicate all the frames of the animation to double the animation length. 
		Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on. 
		The animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::DuplicateFramesNameD(path);
	}
	/*
		Duplicate all the animation frames in reverse so that the animation plays 
		forwards and backwards. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::DuplicateMirrorFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateMirrorFrames(animationId);
	}
	/*
		Duplicate all the animation frames in reverse so that the animation plays 
		forwards and backwards. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::DuplicateMirrorFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::DuplicateMirrorFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::DuplicateMirrorFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::DuplicateMirrorFramesNameD(path);
	}
	/*
		Fade the animation to black starting at the fade frame index to the end 
		of the animation. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FadeEndFrames(int animationId, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeEndFrames(animationId, fade);
	}
	/*
		Fade the animation to black starting at the fade frame index to the end 
		of the animation. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FadeEndFramesName(const wchar_t* path, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeEndFramesName(path, fade);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FadeEndFramesNameD(const wchar_t* path, double fade)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FadeEndFramesNameD(path, fade);
	}
	/*
		Fade the animation from black to full color starting at 0 to the fade frame 
		index. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FadeStartFrames(int animationId, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeStartFrames(animationId, fade);
	}
	/*
		Fade the animation from black to full color starting at 0 to the fade frame 
		index. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FadeStartFramesName(const wchar_t* path, int fade)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FadeStartFramesName(path, fade);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FadeStartFramesNameD(const wchar_t* path, double fade)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FadeStartFramesNameD(path, fade);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::FillColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColor(animationId, frameId, color);
	}
	/*
		Set the RGB value for all colors for all frames. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::FillColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFrames(animationId, color);
	}
	/*
		Set the RGB value for all colors for all frames. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::FillColorAllFramesName(const wchar_t* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFramesName(path, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorAllFramesNameD(const wchar_t* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillColorAllFramesNameD(path, color);
	}
	/*
		Set the RGB value for all colors for all frames. Use the range of 0 to 255 
		for red, green, and blue parameters. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Set the RGB value for all colors for all frames. Use the range of 0 to 255 
		for red, green, and blue parameters. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorAllFramesRGBName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillColorAllFramesRGBNameD(path, red, green, blue);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::FillColorName(const wchar_t* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorName(path, frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorNameD(const wchar_t* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillColorNameD(path, frameId, color);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::FillColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		Set the RGB value for all colors in the specified frame. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::FillColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillColorRGBName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillColorRGBNameD(path, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors in the specified 
		frame. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColor(animationId, frameId, color);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors for all frames. 
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFrames(animationId, color);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors for all frames. 
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesName(const wchar_t* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesName(path, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorAllFramesNameD(const wchar_t* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesNameD(path, color);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors for all frames. 
		Use the range of 0 to 255 for red, green, and blue parameters. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors for all frames. 
		Use the range of 0 to 255 for red, green, and blue parameters. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGBName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillNonZeroColorAllFramesRGBNameD(path, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors in the specified 
		frame. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorName(const wchar_t* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorName(path, frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorNameD(const wchar_t* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillNonZeroColorNameD(path, frameId, color);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors in the specified 
		frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillNonZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Set the RGB value for a subset of colors in the specified 
		frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillNonZeroColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillNonZeroColorRGBName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillNonZeroColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillNonZeroColorRGBNameD(path, frameId, red, green, blue);
	}
	/*
		Fill the frame with random RGB values for the given frame. Animation is 
		referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColors(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColors(animationId, frameId);
	}
	/*
		Fill the frame with random RGB values for all frames. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsAllFrames(animationId);
	}
	/*
		Fill the frame with random RGB values for all frames. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsAllFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsAllFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsAllFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillRandomColorsAllFramesNameD(path);
	}
	/*
		Fill the frame with random black and white values for the specified frame. 
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhite(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhite(animationId, frameId);
	}
	/*
		Fill the frame with random black and white values for all frames. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFrames(animationId);
	}
	/*
		Fill the frame with random black and white values for all frames. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteAllFramesNameD(path);
	}
	/*
		Fill the frame with random black and white values for the specified frame. 
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsBlackAndWhiteName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteName(path, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsBlackAndWhiteNameD(const wchar_t* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillRandomColorsBlackAndWhiteNameD(path, frameId);
	}
	/*
		Fill the frame with random RGB values for the given frame. Animation is 
		referenced by name.
	*/
	void ChromaAnimationAPI::FillRandomColorsName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillRandomColorsName(path, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillRandomColorsNameD(const wchar_t* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillRandomColorsNameD(path, frameId);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColors(int animationId, int frameId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColors(animationId, frameId, threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFrames(int animationId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFrames(animationId, threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesName(const wchar_t* path, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesName(path, threshold, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsAllFramesNameD(const wchar_t* path, double threshold, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesNameD(path, threshold, color);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesRGB(int animationId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGB(animationId, threshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsAllFramesRGBName(const wchar_t* path, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGBName(path, threshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsAllFramesRGBNameD(const wchar_t* path, double threshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsAllFramesRGBNameD(path, threshold, red, green, blue);
	}
	/*
		Fill all frames with the min RGB color where the animation color is less 
		than the min threshold AND with the max RGB color where the animation is 
		more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGB(int animationId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGB(animationId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill all frames with the min RGB color where the animation color is less 
		than the min threshold AND with the max RGB color where the animation is 
		more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBName(const wchar_t* path, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBName(path, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBNameD(const wchar_t* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxAllFramesRGBNameD(path, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with the min RGB color where the animation color 
		is less than the min threshold AND with the max RGB color where the animation 
		is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxRGB(int animationId, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGB(animationId, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with the min RGB color where the animation color 
		is less than the min threshold AND with the max RGB color where the animation 
		is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsMinMaxRGBName(const wchar_t* path, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGBName(path, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsMinMaxRGBNameD(const wchar_t* path, double frameId, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsMinMaxRGBNameD(path, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsName(const wchar_t* path, int frameId, int threshold, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsName(path, frameId, threshold, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsNameD(const wchar_t* path, double frameId, double threshold, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsNameD(path, frameId, threshold, color);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdColorsRGB(int animationId, int frameId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsRGB(animationId, frameId, threshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdColorsRGBName(const wchar_t* path, int frameId, int threshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdColorsRGBName(path, frameId, threshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdColorsRGBNameD(const wchar_t* path, double frameId, double threshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdColorsRGBNameD(path, frameId, threshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGB(int animationId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGB(animationId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is less than the 
		RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBName(const wchar_t* path, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBName(path, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBNameD(const wchar_t* path, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdRGBColorsAllFramesRGBNameD(path, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsRGB(int animationId, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGB(animationId, frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is less 
		than the RGB threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillThresholdRGBColorsRGBName(const wchar_t* path, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGBName(path, frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillThresholdRGBColorsRGBNameD(const wchar_t* path, double frameId, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillThresholdRGBColorsRGBNameD(path, frameId, redThreshold, greenThreshold, blueThreshold, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero. 
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColor(animationId, frameId, color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFrames(animationId, color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesName(const wchar_t* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesName(path, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorAllFramesNameD(const wchar_t* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillZeroColorAllFramesNameD(path, color);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Fill all frames with RGB color where the animation color is zero. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGBName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillZeroColorAllFramesRGBNameD(path, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero. 
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorName(const wchar_t* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorName(path, frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorNameD(const wchar_t* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillZeroColorNameD(path, frameId, color);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero. 
		Animation is referenced by id.
	*/
	void ChromaAnimationAPI::FillZeroColorRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorRGB(animationId, frameId, red, green, blue);
	}
	/*
		Fill the specified frame with RGB color where the animation color is zero. 
		Animation is referenced by name.
	*/
	void ChromaAnimationAPI::FillZeroColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::FillZeroColorRGBName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::FillZeroColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::FillZeroColorRGBNameD(path, frameId, red, green, blue);
	}
	/*
		Get the animation color for a frame given the `1D` `led`. The `led` should 
		be greater than or equal to 0 and less than the `MaxLeds`. Animation is 
		referenced by id.
	*/
	int ChromaAnimationAPI::Get1DColor(int animationId, int frameId, int led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get1DColor(animationId, frameId, led);
	}
	/*
		Get the animation color for a frame given the `1D` `led`. The `led` should 
		be greater than or equal to 0 and less than the `MaxLeds`. Animation is 
		referenced by name.
	*/
	int ChromaAnimationAPI::Get1DColorName(const wchar_t* path, int frameId, int led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get1DColorName(path, frameId, led);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Get1DColorNameD(const wchar_t* path, double frameId, double led)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get1DColorNameD(path, frameId, led);
	}
	/*
		Get the animation color for a frame given the `2D` `row` and `column`. The 
		`row` should be greater than or equal to 0 and less than the `MaxRow`. 
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
		Animation is referenced by id.
	*/
	int ChromaAnimationAPI::Get2DColor(int animationId, int frameId, int row, int column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get2DColor(animationId, frameId, row, column);
	}
	/*
		Get the animation color for a frame given the `2D` `row` and `column`. The 
		`row` should be greater than or equal to 0 and less than the `MaxRow`. 
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
		Animation is referenced by name.
	*/
	int ChromaAnimationAPI::Get2DColorName(const wchar_t* path, int frameId, int row, int column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get2DColorName(path, frameId, row, column);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Get2DColorNameD(const wchar_t* path, double frameId, double row, double column)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Get2DColorNameD(path, frameId, row, column);
	}
	/*
		Get the animation id for the named animation.
	*/
	int ChromaAnimationAPI::GetAnimation(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetAnimation(name);
	}
	/*
		`PluginGetAnimationCount` will return the number of loaded animations.
	*/
	int ChromaAnimationAPI::GetAnimationCount()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetAnimationCount();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetAnimationD(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetAnimationD(name);
	}
	/*
		`PluginGetAnimationId` will return the `animationId` given the `index` of 
		the loaded animation. The `index` is zero-based and less than the number 
		returned by `PluginGetAnimationCount`. Use `PluginGetAnimationName` to 
		get the name of the animation.
	*/
	int ChromaAnimationAPI::GetAnimationId(int index)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetAnimationId(index);
	}
	/*
		`PluginGetAnimationName` takes an `animationId` and returns the name of 
		the animation of the `.chroma` animation file. If a name is not available 
		then an empty string will be returned.
	*/
	const wchar_t* ChromaAnimationAPI::GetAnimationName(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return L"";
		}
		if (!_sInitialized)
		{
			return L"";
		}
		return UnicodeChromaAnimationAPI::GetAnimationName(animationId);
	}
	/*
		Get the current frame of the animation referenced by id.
	*/
	int ChromaAnimationAPI::GetCurrentFrame(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetCurrentFrame(animationId);
	}
	/*
		Get the current frame of the animation referenced by name.
	*/
	int ChromaAnimationAPI::GetCurrentFrameName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetCurrentFrameName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetCurrentFrameNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetCurrentFrameNameD(path);
	}
	/*
		Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma` 
		animation respective to the `deviceType`, as an integer upon success. Returns 
		negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDevice(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDevice(animationId);
	}
	/*
		Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma` 
		animation respective to the `deviceType`, as an integer upon success. Returns 
		negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDeviceName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetDeviceNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDeviceNameD(path);
	}
	/*
		Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer 
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceType(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDeviceType(animationId);
	}
	/*
		Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer 
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetDeviceTypeName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDeviceTypeName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetDeviceTypeNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetDeviceTypeNameD(path);
	}
	/*
		Get the frame colors and duration (in seconds) for a `Chroma` animation 
		referenced by id. The `color` is expected to be an array of the expected 
		dimensions for the `deviceType/device`. The `length` parameter is the size 
		of the `color` array. For `EChromaSDKDevice1DEnum` the array size should 
		be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should be `MAX 
		ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard 
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the 
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength. 
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetFrame(int animationId, int frameId, float* duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetFrame(animationId, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Returns the frame count of a `Chroma` animation upon success. Returns negative 
		one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameCount(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameCount(animationId);
	}
	/*
		Returns the frame count of a `Chroma` animation upon success. Returns negative 
		one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameCountName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameCountName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetFrameCountNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameCountNameD(path);
	}
	/*
		Returns the duration of an animation frame in seconds upon success. Returns 
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetFrameDuration(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameDuration(animationId, frameId);
	}
	/*
		Returns the duration of an animation frame in seconds upon success. Returns 
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetFrameDurationName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetFrameDurationName(path, frameId);
	}
	/*
		Get the frame colors and duration (in seconds) for a `Chroma` animation 
		referenced by name. The `color` is expected to be an array of the expected 
		dimensions for the `deviceType/device`. The `length` parameter is the size 
		of the `color` array. For `EChromaSDKDevice1DEnum` the array size should 
		be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should be `MAX 
		ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard 
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the 
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength. 
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetFrameName(const wchar_t* path, int frameId, float* duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetFrameName(path, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Get the color of an animation key for the given frame referenced by id.
	*/
	int ChromaAnimationAPI::GetKeyColor(int animationId, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetKeyColor(animationId, frameId, rzkey);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetKeyColorD(const wchar_t* path, double frameId, double rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetKeyColorD(path, frameId, rzkey);
	}
	/*
		Get the color of an animation key for the given frame referenced by name.
	*/
	int ChromaAnimationAPI::GetKeyColorName(const wchar_t* path, int frameId, int rzkey)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetKeyColorName(path, frameId, rzkey);
	}
	/*
		Returns `RZRESULT_SUCCESS` if the plugin has been initialized successfully. 
		Returns `RZRESULT_DLL_NOT_FOUND` if core Chroma library is not found. Returns 
		`RZRESULT_DLL_INVALID_SIGNATURE` if core Chroma library has an invalid 
		signature.
	*/
	RZRESULT ChromaAnimationAPI::GetLibraryLoadedState()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetLibraryLoadedState();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetLibraryLoadedStateD()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetLibraryLoadedStateD();
	}
	/*
		Returns the `MAX COLUMN` given the `EChromaSDKDevice2DEnum` device as an 
		integer upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxColumn(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxColumn(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxColumnD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxColumnD(device);
	}
	/*
		Returns the MAX LEDS given the `EChromaSDKDevice1DEnum` device as an integer 
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxLeds(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxLeds(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxLedsD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxLedsD(device);
	}
	/*
		Returns the `MAX ROW` given the `EChromaSDKDevice2DEnum` device as an integer 
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::GetMaxRow(int device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxRow(device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetMaxRowD(double device)
	{
		if (!_sIsInitializedAPI)
		{
			return 1;
		}
		if (!_sInitialized)
		{
			return 1;
		}
		return UnicodeChromaAnimationAPI::GetMaxRowD(device);
	}
	/*
		`PluginGetPlayingAnimationCount` will return the number of playing animations.
	*/
	int ChromaAnimationAPI::GetPlayingAnimationCount()
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetPlayingAnimationCount();
	}
	/*
		`PluginGetPlayingAnimationId` will return the `animationId` given the `index` 
		of the playing animation. The `index` is zero-based and less than the number 
		returned by `PluginGetPlayingAnimationCount`. Use `PluginGetAnimationName` 
		to get the name of the animation.
	*/
	int ChromaAnimationAPI::GetPlayingAnimationId(int index)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::GetPlayingAnimationId(index);
	}
	/*
		Get the RGB color given red, green, and blue.
	*/
	int ChromaAnimationAPI::GetRGB(int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetRGB(red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::GetRGBD(double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetRGBD(red, green, blue);
	}
	/*
		Returns the total duration of an animation in seconds upon success. Returns 
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetTotalDuration(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetTotalDuration(animationId);
	}
	/*
		Returns the total duration of an animation in seconds upon success. Returns 
		zero upon failure.
	*/
	float ChromaAnimationAPI::GetTotalDurationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::GetTotalDurationName(path);
	}
	/*
		Check if the animation has loop enabled referenced by id.
	*/
	bool ChromaAnimationAPI::HasAnimationLoop(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::HasAnimationLoop(animationId);
	}
	/*
		Check if the animation has loop enabled referenced by name.
	*/
	bool ChromaAnimationAPI::HasAnimationLoopName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::HasAnimationLoopName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::HasAnimationLoopNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::HasAnimationLoopNameD(path);
	}
	/*
		Initialize the ChromaSDK. Zero indicates success, otherwise failure. Many 
		API methods auto initialize the ChromaSDK if not already initialized.
	*/
	RZRESULT ChromaAnimationAPI::Init()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::Init();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InitD()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::InitD();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Initialize the ChromaSDK. AppInfo populates the details in Synapse. Zero 
		indicates success, otherwise failure. Many API methods auto initialize 
		the ChromaSDK if not already initialized.
	*/
	RZRESULT ChromaAnimationAPI::InitSDK(ChromaSDK::APPINFOTYPE* appInfo)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::InitSDK(appInfo);
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = true;
		}
		return result;
	}
	/*
		Insert an animation delay by duplicating the frame by the delay number of 
		times. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::InsertDelay(int animationId, int frameId, int delay)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertDelay(animationId, frameId, delay);
	}
	/*
		Insert an animation delay by duplicating the frame by the delay number of 
		times. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::InsertDelayName(const wchar_t* path, int frameId, int delay)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertDelayName(path, frameId, delay);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InsertDelayNameD(const wchar_t* path, double frameId, double delay)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::InsertDelayNameD(path, frameId, delay);
	}
	/*
		Duplicate the source frame index at the target frame index. Animation is 
		referenced by id.
	*/
	void ChromaAnimationAPI::InsertFrame(int animationId, int sourceFrame, int targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertFrame(animationId, sourceFrame, targetFrame);
	}
	/*
		Duplicate the source frame index at the target frame index. Animation is 
		referenced by name.
	*/
	void ChromaAnimationAPI::InsertFrameName(const wchar_t* path, int sourceFrame, int targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InsertFrameName(path, sourceFrame, targetFrame);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InsertFrameNameD(const wchar_t* path, double sourceFrame, double targetFrame)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::InsertFrameNameD(path, sourceFrame, targetFrame);
	}
	/*
		Invert all the colors at the specified frame. Animation is referenced by 
		id.
	*/
	void ChromaAnimationAPI::InvertColors(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColors(animationId, frameId);
	}
	/*
		Invert all the colors for all frames. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::InvertColorsAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColorsAllFrames(animationId);
	}
	/*
		Invert all the colors for all frames. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::InvertColorsAllFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColorsAllFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InvertColorsAllFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::InvertColorsAllFramesNameD(path);
	}
	/*
		Invert all the colors at the specified frame. Animation is referenced by 
		name.
	*/
	void ChromaAnimationAPI::InvertColorsName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::InvertColorsName(path, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::InvertColorsNameD(const wchar_t* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::InvertColorsNameD(path, frameId);
	}
	/*
		Check if the animation is paused referenced by id.
	*/
	bool ChromaAnimationAPI::IsAnimationPaused(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsAnimationPaused(animationId);
	}
	/*
		Check if the animation is paused referenced by name.
	*/
	bool ChromaAnimationAPI::IsAnimationPausedName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsAnimationPausedName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsAnimationPausedNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::IsAnimationPausedNameD(path);
	}
	/*
		The editor dialog is a non-blocking modal window, this method returns true 
		if the modal window is open, otherwise false.
	*/
	bool ChromaAnimationAPI::IsDialogOpen()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsDialogOpen();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsDialogOpenD()
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::IsDialogOpenD();
	}
	/*
		Returns true if the plugin has been initialized. Returns false if the plugin 
		is uninitialized.
	*/
	bool ChromaAnimationAPI::IsInitialized()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsInitialized();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsInitializedD()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsInitializedD();
	}
	/*
		If the method can be invoked the method returns true.
	*/
	bool ChromaAnimationAPI::IsPlatformSupported()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlatformSupported();
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlatformSupportedD()
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlatformSupportedD();
	}
	/*
		`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`. 
		The named `.chroma` animation file will be automatically opened. The method 
		will return whether the animation is playing or not. Animation is referenced 
		by id.
	*/
	bool ChromaAnimationAPI::IsPlaying(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlaying(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingD(animationId);
	}
	/*
		`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`. 
		The named `.chroma` animation file will be automatically opened. The method 
		will return whether the animation is playing or not. Animation is referenced 
		by name.
	*/
	bool ChromaAnimationAPI::IsPlayingName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingNameD(path);
	}
	/*
		`PluginIsPlayingType` automatically handles initializing the `ChromaSDK`. 
		If any animation is playing for the `deviceType` and `device` combination, 
		the method will return true, otherwise false.
	*/
	bool ChromaAnimationAPI::IsPlayingType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingType(deviceType, device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::IsPlayingTypeD(double deviceType, double device)
	{
		if (!_sIsInitializedAPI)
		{
			return false;
		}
		if (!_sInitialized)
		{
			return false;
		}
		return UnicodeChromaAnimationAPI::IsPlayingTypeD(deviceType, device);
	}
	/*
		Do a lerp math operation on a float.
	*/
	float ChromaAnimationAPI::Lerp(float start, float end, float amt)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::Lerp(start, end, amt);
	}
	/*
		Lerp from one color to another given t in the range 0.0 to 1.0.
	*/
	int ChromaAnimationAPI::LerpColor(int from, int to, float t)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::LerpColor(from, to, t);
	}
	/*
		Loads `Chroma` effects so that the animation can be played immediately. 
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::LoadAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::LoadAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::LoadAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::LoadAnimationD(animationId);
	}
	/*
		Load the named animation.
	*/
	void ChromaAnimationAPI::LoadAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::LoadAnimationName(path);
	}
	/*
		Load a composite set of animations.
	*/
	void ChromaAnimationAPI::LoadComposite(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::LoadComposite(name);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color defaults to color. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFrames(int animationId, int frameCount, float duration, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFrames(animationId, frameCount, duration, color);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color defaults to color. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesName(const wchar_t* path, int frameCount, float duration, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesName(path, frameCount, duration, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesNameD(const wchar_t* path, double frameCount, double duration, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MakeBlankFramesNameD(path, frameCount, duration, color);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color is random. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandom(int animationId, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandom(animationId, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color is random black and white. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhite(int animationId, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhite(animationId, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color is random black and white. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteName(const wchar_t* path, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteName(path, frameCount, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteNameD(const wchar_t* path, double frameCount, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MakeBlankFramesRandomBlackAndWhiteNameD(path, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color is random. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRandomName(const wchar_t* path, int frameCount, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRandomName(path, frameCount, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRandomNameD(const wchar_t* path, double frameCount, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MakeBlankFramesRandomNameD(path, frameCount, duration);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color defaults to color. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRGB(int animationId, int frameCount, float duration, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRGB(animationId, frameCount, duration, red, green, blue);
	}
	/*
		Make a blank animation for the length of the frame count. Frame duration 
		defaults to the duration. The frame color defaults to color. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::MakeBlankFramesRGBName(const wchar_t* path, int frameCount, float duration, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MakeBlankFramesRGBName(path, frameCount, duration, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MakeBlankFramesRGBNameD(const wchar_t* path, double frameCount, double duration, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MakeBlankFramesRGBNameD(path, frameCount, duration, red, green, blue);
	}
	/*
		Flips the color grid horizontally for all `Chroma` animation frames. Returns 
		the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::MirrorHorizontally(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MirrorHorizontally(animationId);
	}
	/*
		Flips the color grid vertically for all `Chroma` animation frames. This 
		method has no effect for `EChromaSDKDevice1DEnum` devices. Returns the 
		animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::MirrorVertically(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MirrorVertically(animationId);
	}
	/*
		Multiply the color intensity with the lerp result from color 1 to color 
		2 using the frame index divided by the frame count for the `t` parameter. 
		Animation is referenced in id.
	*/
	void ChromaAnimationAPI::MultiplyColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply the color intensity with the lerp result from color 1 to color 
		2 using the frame index divided by the frame count for the `t` parameter. 
		Animation is referenced in name.
	*/
	void ChromaAnimationAPI::MultiplyColorLerpAllFramesName(const wchar_t* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyColorLerpAllFramesName(path, color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyColorLerpAllFramesNameD(path, color1, color2);
	}
	/*
		Multiply all the colors in the frame by the intensity value. The valid the 
		intensity range is from 0.0 to 255.0. RGB components are multiplied equally. 
		An intensity of 0.5 would half the color value. Black colors in the frame 
		will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensity(int animationId, int frameId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensity(animationId, frameId, intensity);
	}
	/*
		Multiply all the colors for all frames by the intensity value. The valid 
		the intensity range is from 0.0 to 255.0. RGB components are multiplied 
		equally. An intensity of 0.5 would half the color value. Black colors in 
		the frame will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFrames(int animationId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFrames(animationId, intensity);
	}
	/*
		Multiply all the colors for all frames by the intensity value. The valid 
		the intensity range is from 0.0 to 255.0. RGB components are multiplied 
		equally. An intensity of 0.5 would half the color value. Black colors in 
		the frame will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesName(const wchar_t* path, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesName(path, intensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityAllFramesNameD(const wchar_t* path, double intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesNameD(path, intensity);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesRGB(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGB(animationId, red, green, blue);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityAllFramesRGBName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGBName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityAllFramesRGBNameD(path, red, green, blue);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColor(int animationId, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColor(animationId, frameId, color);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorAllFrames(int animationId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFrames(animationId, color);
	}
	/*
		Multiply all frames by the RBG color intensity. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorAllFramesName(const wchar_t* path, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFramesName(path, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityColorAllFramesNameD(const wchar_t* path, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityColorAllFramesNameD(path, color);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityColorName(const wchar_t* path, int frameId, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityColorName(path, frameId, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityColorNameD(const wchar_t* path, double frameId, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityColorNameD(path, frameId, color);
	}
	/*
		Multiply all the colors in the frame by the intensity value. The valid the 
		intensity range is from 0.0 to 255.0. RGB components are multiplied equally. 
		An intensity of 0.5 would half the color value. Black colors in the frame 
		will not be affected by this method.
	*/
	void ChromaAnimationAPI::MultiplyIntensityName(const wchar_t* path, int frameId, float intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityName(path, frameId, intensity);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityNameD(const wchar_t* path, double frameId, double intensity)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityNameD(path, frameId, intensity);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyIntensityRGB(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityRGB(animationId, frameId, red, green, blue);
	}
	/*
		Multiply the specific frame by the RBG color intensity. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MultiplyIntensityRGBName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyIntensityRGBName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyIntensityRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyIntensityRGBNameD(path, frameId, red, green, blue);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and 
		2 using the frame color value as the `t` value. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerp(int animationId, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerp(animationId, frameId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using 
		the frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using 
		the frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesName(const wchar_t* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesName(path, color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesNameD(path, color1, color2);
	}
	/*
		Multiply the specific frame by the color lerp result between RGB 1 and 2 
		using the frame color value as the `t` value. Animation is referenced by 
		id.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGB(animationId, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between RGB 1 and 2 
		using the frame color value as the `t` value. Animation is referenced by 
		name.
	*/
	void ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBName(const wchar_t* path, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBName(path, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBNameD(const wchar_t* path, double red1, double green1, double blue1, double red2, double green2, double blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyNonZeroTargetColorLerpAllFramesRGBNameD(path, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and 
		2 using the frame color value as the `t` value. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerp(int animationId, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerp(animationId, frameId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using 
		the frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFrames(int animationId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFrames(animationId, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between color 1 and 2 using 
		the frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesName(const wchar_t* path, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesName(path, color1, color2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesNameD(path, color1, color2);
	}
	/*
		Multiply all frames by the color lerp result between RGB 1 and 2 using the 
		frame color value as the `t` value. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGB(animationId, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply all frames by the color lerp result between RGB 1 and 2 using the 
		frame color value as the `t` value. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBName(const wchar_t* path, int red1, int green1, int blue1, int red2, int green2, int blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBName(path, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBNameD(const wchar_t* path, double red1, double green1, double blue1, double red2, double green2, double blue2)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::MultiplyTargetColorLerpAllFramesRGBNameD(path, red1, green1, blue1, red2, green2, blue2);
	}
	/*
		Multiply the specific frame by the color lerp result between color 1 and 
		2 using the frame color value as the `t` value. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::MultiplyTargetColorLerpName(const wchar_t* path, int frameId, int color1, int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::MultiplyTargetColorLerpName(path, frameId, color1, color2);
	}
	/*
		Offset all colors in the frame using the RGB offset. Use the range of -255 
		to 255 for red, green, and blue parameters. Negative values remove color. 
		Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColors(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColors(animationId, frameId, red, green, blue);
	}
	/*
		Offset all colors for all frames using the RGB offset. Use the range of 
		-255 to 255 for red, green, and blue parameters. Negative values remove 
		color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsAllFrames(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColorsAllFrames(animationId, red, green, blue);
	}
	/*
		Offset all colors for all frames using the RGB offset. Use the range of 
		-255 to 255 for red, green, and blue parameters. Negative values remove 
		color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsAllFramesName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColorsAllFramesName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetColorsAllFramesNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OffsetColorsAllFramesNameD(path, red, green, blue);
	}
	/*
		Offset all colors in the frame using the RGB offset. Use the range of -255 
		to 255 for red, green, and blue parameters. Negative values remove color. 
		Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetColorsName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetColorsName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetColorsNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OffsetColorsNameD(path, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Offset a subset of colors in the frame using the RGB offset. 
		Use the range of -255 to 255 for red, green, and blue parameters. Negative 
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColors(int animationId, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColors(animationId, frameId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Offset a subset of colors for all frames using the RGB offset. 
		Use the range of -255 to 255 for red, green, and blue parameters. Negative 
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsAllFrames(int animationId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFrames(animationId, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Offset a subset of colors for all frames using the RGB offset. 
		Use the range of -255 to 255 for red, green, and blue parameters. Negative 
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsAllFramesName(const wchar_t* path, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFramesName(path, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetNonZeroColorsAllFramesNameD(const wchar_t* path, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OffsetNonZeroColorsAllFramesNameD(path, red, green, blue);
	}
	/*
		This method will only update colors in the animation that are not already 
		set to black. Offset a subset of colors in the frame using the RGB offset. 
		Use the range of -255 to 255 for red, green, and blue parameters. Negative 
		values remove color. Positive values add color.
	*/
	void ChromaAnimationAPI::OffsetNonZeroColorsName(const wchar_t* path, int frameId, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OffsetNonZeroColorsName(path, frameId, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OffsetNonZeroColorsNameD(const wchar_t* path, double frameId, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OffsetNonZeroColorsNameD(path, frameId, red, green, blue);
	}
	/*
		Opens a `Chroma` animation file so that it can be played. Returns an animation 
		id >= 0 upon success. Returns negative one if there was a failure. The 
		animation id is used in most of the API methods.
	*/
	int ChromaAnimationAPI::OpenAnimation(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenAnimation(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenAnimationD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenAnimationD(path);
	}
	/*
		Opens a `Chroma` animation data from memory so that it can be played. `Data` 
		is a pointer to BYTE array of the loaded animation in memory. `Name` will 
		be assigned to the animation when loaded. Returns an animation id >= 0 
		upon success. Returns negative one if there was a failure. The animation 
		id is used in most of the API methods.
	*/
	int ChromaAnimationAPI::OpenAnimationFromMemory(const BYTE* data, const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenAnimationFromMemory(data, name);
	}
	/*
		Opens a `Chroma` animation file with the `.chroma` extension. Returns zero 
		upon success. Returns negative one if there was a failure.
	*/
	int ChromaAnimationAPI::OpenEditorDialog(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenEditorDialog(path);
	}
	/*
		Open the named animation in the editor dialog and play the animation at 
		start.
	*/
	int ChromaAnimationAPI::OpenEditorDialogAndPlay(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenEditorDialogAndPlay(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenEditorDialogAndPlayD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenEditorDialogAndPlayD(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OpenEditorDialogD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OpenEditorDialogD(path);
	}
	/*
		Sets the `duration` for all grames in the `Chroma` animation to the `duration` 
		parameter. Returns the animation id upon success. Returns negative one 
		upon failure.
	*/
	int ChromaAnimationAPI::OverrideFrameDuration(int animationId, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OverrideFrameDuration(animationId, duration);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::OverrideFrameDurationD(double animationId, double duration)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::OverrideFrameDurationD(animationId, duration);
	}
	/*
		Override the duration of all frames with the `duration` value. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::OverrideFrameDurationName(const wchar_t* path, float duration)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::OverrideFrameDurationName(path, duration);
	}
	/*
		Pause the current animation referenced by id.
	*/
	void ChromaAnimationAPI::PauseAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PauseAnimation(animationId);
	}
	/*
		Pause the current animation referenced by name.
	*/
	void ChromaAnimationAPI::PauseAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PauseAnimationName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PauseAnimationNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PauseAnimationNameD(path);
	}
	/*
		Plays the `Chroma` animation. This will load the animation, if not loaded 
		previously. Returns the animation id upon success. Returns negative one 
		upon failure.
	*/
	int ChromaAnimationAPI::PlayAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimationD(animationId);
	}
	/*
		`PluginPlayAnimationFrame` automatically handles initializing the `ChromaSDK`. 
		The method will play the animation given the `animationId` with looping 
		`on` or `off` starting at the `frameId`.
	*/
	void ChromaAnimationAPI::PlayAnimationFrame(int animationId, int frameId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationFrame(animationId, frameId, loop);
	}
	/*
		`PluginPlayAnimationFrameName` automatically handles initializing the `ChromaSDK`. 
		The named `.chroma` animation file will be automatically opened. The animation 
		will play with looping `on` or `off` starting at the `frameId`.
	*/
	void ChromaAnimationAPI::PlayAnimationFrameName(const wchar_t* path, int frameId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationFrameName(path, frameId, loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationFrameNameD(const wchar_t* path, double frameId, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimationFrameNameD(path, frameId, loop);
	}
	/*
		`PluginPlayAnimationLoop` automatically handles initializing the `ChromaSDK`. 
		The method will play the animation given the `animationId` with looping 
		`on` or `off`.
	*/
	void ChromaAnimationAPI::PlayAnimationLoop(int animationId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationLoop(animationId, loop);
	}
	/*
		`PluginPlayAnimationName` automatically handles initializing the `ChromaSDK`. 
		The named `.chroma` animation file will be automatically opened. The animation 
		will play with looping `on` or `off`.
	*/
	void ChromaAnimationAPI::PlayAnimationName(const wchar_t* path, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayAnimationName(path, loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayAnimationNameD(const wchar_t* path, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayAnimationNameD(path, loop);
	}
	/*
		`PluginPlayComposite` automatically handles initializing the `ChromaSDK`. 
		The named animation files for the `.chroma` set will be automatically opened. 
		The set of animations will play with looping `on` or `off`.
	*/
	void ChromaAnimationAPI::PlayComposite(const wchar_t* name, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PlayComposite(name, loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PlayCompositeD(const wchar_t* name, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PlayCompositeD(name, loop);
	}
	/*
		Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`. 
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::PreviewFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PreviewFrame(animationId, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::PreviewFrameD(double animationId, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::PreviewFrameD(animationId, frameId);
	}
	/*
		Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`. 
		Animaton is referenced by name.
	*/
	void ChromaAnimationAPI::PreviewFrameName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::PreviewFrameName(path, frameId);
	}
	/*
		Reduce the frames of the animation by removing every nth element. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::ReduceFrames(int animationId, int n)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReduceFrames(animationId, n);
	}
	/*
		Reduce the frames of the animation by removing every nth element. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::ReduceFramesName(const wchar_t* path, int n)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReduceFramesName(path, n);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ReduceFramesNameD(const wchar_t* path, double n)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::ReduceFramesNameD(path, n);
	}
	/*
		Resets the `Chroma` animation to 1 blank frame. Returns the animation id 
		upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::ResetAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::ResetAnimation(animationId);
	}
	/*
		Resume the animation with loop `ON` or `OFF` referenced by id.
	*/
	void ChromaAnimationAPI::ResumeAnimation(int animationId, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ResumeAnimation(animationId, loop);
	}
	/*
		Resume the animation with loop `ON` or `OFF` referenced by name.
	*/
	void ChromaAnimationAPI::ResumeAnimationName(const wchar_t* path, bool loop)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ResumeAnimationName(path, loop);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ResumeAnimationNameD(const wchar_t* path, double loop)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::ResumeAnimationNameD(path, loop);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Returns the 
		animation id upon success. Returns negative one upon failure. Animation 
		is referenced by id.
	*/
	int ChromaAnimationAPI::Reverse(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::Reverse(animationId);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Animation is 
		referenced by id.
	*/
	void ChromaAnimationAPI::ReverseAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReverseAllFrames(animationId);
	}
	/*
		Reverse the animation frame order of the `Chroma` animation. Animation is 
		referenced by name.
	*/
	void ChromaAnimationAPI::ReverseAllFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::ReverseAllFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::ReverseAllFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::ReverseAllFramesNameD(path);
	}
	/*
		Save the animation referenced by id to the path specified.
	*/
	int ChromaAnimationAPI::SaveAnimation(int animationId, const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SaveAnimation(animationId, path);
	}
	/*
		Save the named animation to the target path specified.
	*/
	int ChromaAnimationAPI::SaveAnimationName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SaveAnimationName(sourceAnimation, targetAnimation);
	}
	/*
		Set the animation color for a frame given the `1D` `led`. The `led` should 
		be greater than or equal to 0 and less than the `MaxLeds`. The animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::Set1DColor(int animationId, int frameId, int led, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set1DColor(animationId, frameId, led, color);
	}
	/*
		Set the animation color for a frame given the `1D` `led`. The `led` should 
		be greater than or equal to 0 and less than the `MaxLeds`. The animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::Set1DColorName(const wchar_t* path, int frameId, int led, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set1DColorName(path, frameId, led, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Set1DColorNameD(const wchar_t* path, double frameId, double led, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::Set1DColorNameD(path, frameId, led, color);
	}
	/*
		Set the animation color for a frame given the `2D` `row` and `column`. The 
		`row` should be greater than or equal to 0 and less than the `MaxRow`. 
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
		The animation is referenced by id.
	*/
	void ChromaAnimationAPI::Set2DColor(int animationId, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set2DColor(animationId, frameId, row, column, color);
	}
	/*
		Set the animation color for a frame given the `2D` `row` and `column`. The 
		`row` should be greater than or equal to 0 and less than the `MaxRow`. 
		The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
		The animation is referenced by name.
	*/
	void ChromaAnimationAPI::Set2DColorName(const wchar_t* path, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::Set2DColorName(path, frameId, row, column, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::Set2DColorNameD(const wchar_t* path, double frameId, double rowColumnIndex, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::Set2DColorNameD(path, frameId, rowColumnIndex, color);
	}
	/*
		When custom color is set, the custom key mode will be used. The animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetChromaCustomColorAllFrames(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomColorAllFrames(animationId);
	}
	/*
		When custom color is set, the custom key mode will be used. The animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetChromaCustomColorAllFramesName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomColorAllFramesName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetChromaCustomColorAllFramesNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetChromaCustomColorAllFramesNameD(path);
	}
	/*
		Set the Chroma custom key color flag on all frames. `True` changes the layout 
		from grid to key. `True` changes the layout from key to grid. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetChromaCustomFlag(int animationId, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomFlag(animationId, flag);
	}
	/*
		Set the Chroma custom key color flag on all frames. `True` changes the layout 
		from grid to key. `True` changes the layout from key to grid. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetChromaCustomFlagName(const wchar_t* path, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetChromaCustomFlagName(path, flag);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetChromaCustomFlagNameD(const wchar_t* path, double flag)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetChromaCustomFlagNameD(path, flag);
	}
	/*
		Set the current frame of the animation referenced by id.
	*/
	void ChromaAnimationAPI::SetCurrentFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetCurrentFrame(animationId, frameId);
	}
	/*
		Set the current frame of the animation referenced by name.
	*/
	void ChromaAnimationAPI::SetCurrentFrameName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetCurrentFrameName(path, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetCurrentFrameNameD(const wchar_t* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetCurrentFrameNameD(path, frameId);
	}
	/*
		Set the custom alpha flag on the color array
	*/
	RZRESULT ChromaAnimationAPI::SetCustomColorFlag2D(int device, int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetCustomColorFlag2D(device, colors);
	}
	/*
		Changes the `deviceType` and `device` of a `Chroma` animation. If the device 
		is changed, the `Chroma` animation will be reset with 1 blank frame. Returns 
		the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::SetDevice(int animationId, int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetDevice(animationId, deviceType, device);
	}
	/*
		SetEffect will display the referenced effect id.
	*/
	RZRESULT ChromaAnimationAPI::SetEffect(const ChromaSDK::FChromaSDKGuid& effectId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffect(effectId);
	}
	/*
		SetEffectCustom1D will display the referenced colors immediately
	*/
	RZRESULT ChromaAnimationAPI::SetEffectCustom1D(const int device, const int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectCustom1D(device, colors);
	}
	/*
		SetEffectCustom2D will display the referenced colors immediately.
	*/
	RZRESULT ChromaAnimationAPI::SetEffectCustom2D(const int device, const int* colors)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectCustom2D(device, colors);
	}
	/*
		SetEffectKeyboardCustom2D will display the referenced custom keyboard colors 
		immediately. Colors represent a visual grid layout. Keys represent the 
		hotkeys for any layout.
	*/
	RZRESULT ChromaAnimationAPI::SetEffectKeyboardCustom2D(const int device, const int* colors, const int* keys)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetEffectKeyboardCustom2D(device, colors, keys);
	}
	/*
		When the idle animation is used, the named animation will play when no other 
		animations are playing. Reference the animation by id.
	*/
	void ChromaAnimationAPI::SetIdleAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetIdleAnimation(animationId);
	}
	/*
		When the idle animation is used, the named animation will play when no other 
		animations are playing. Reference the animation by name.
	*/
	void ChromaAnimationAPI::SetIdleAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetIdleAnimationName(path);
	}
	/*
		Set animation key to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColor(animationId, frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFrames(int animationId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFrames(animationId, rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesName(const wchar_t* path, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesName(path, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorAllFramesNameD(const wchar_t* path, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyColorAllFramesNameD(path, rzkey, color);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced 
		by id.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesRGB(int animationId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGB(animationId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for all frames. Animation is referenced 
		by name.
	*/
	void ChromaAnimationAPI::SetKeyColorAllFramesRGBName(const wchar_t* path, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGBName(path, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorAllFramesRGBNameD(const wchar_t* path, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyColorAllFramesRGBNameD(path, rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyColorName(const wchar_t* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorName(path, frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorNameD(const wchar_t* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyColorNameD(path, frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for the specified frame. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for the specified frame. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyColorRGBName(path, frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyColorRGBNameD(path, frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame if the existing 
		color is not already black.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColor(animationId, frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame if the existing 
		color is not already black.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorName(const wchar_t* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorName(path, frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyNonZeroColorNameD(const wchar_t* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyNonZeroColorNameD(path, frameId, rzkey, color);
	}
	/*
		Set the key to the specified key color for the specified frame where color 
		is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set the key to the specified key color for the specified frame where color 
		is not black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyNonZeroColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGBName(path, frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyNonZeroColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyNonZeroColorRGBNameD(path, frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key by row and column to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeyRowColumnColorName(const wchar_t* path, int frameId, int row, int column, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyRowColumnColorName(path, frameId, row, column, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesName(path, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesRGB(animationId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for all frames. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorAllFramesRGBName(const wchar_t* path, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorAllFramesRGBName(path, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame.
	*/
	void ChromaAnimationAPI::SetKeysColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorName(path, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation 
		is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame. Animation 
		is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysColorRGBName(path, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame if 
		the existing color is not already black.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames if the existing 
		color is not already black. Reference animation by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorAllFramesName(path, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame if 
		the existing color is not already black. Reference animation by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorName(path, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is not black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is not black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysNonZeroColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysNonZeroColorRGBName(path, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColor(animationId, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the 
		color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFrames(animationId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the 
		color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesName(path, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for all frames where the 
		color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesRGB(animationId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for all frames where the 
		color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorAllFramesRGBName(const wchar_t* path, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorAllFramesRGBName(path, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorName(path, frameId, rzkeys, keyCount, color);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorRGB(animationId, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set an array of animation keys to a static color for the given frame where 
		the color is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeysZeroColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeysZeroColorRGBName(path, frameId, rzkeys, keyCount, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame where the color 
		is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyZeroColor(int animationId, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColor(animationId, frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame where the color 
		is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorName(const wchar_t* path, int frameId, int rzkey, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColorName(path, frameId, rzkey, color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyZeroColorNameD(const wchar_t* path, double frameId, double rzkey, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyZeroColorNameD(path, frameId, rzkey, color);
	}
	/*
		Set animation key to a static color for the given frame where the color 
		is black. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColorRGB(animationId, frameId, rzkey, red, green, blue);
	}
	/*
		Set animation key to a static color for the given frame where the color 
		is black. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SetKeyZeroColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetKeyZeroColorRGBName(path, frameId, rzkey, red, green, blue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SetKeyZeroColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SetKeyZeroColorRGBNameD(path, frameId, rzkey, red, green, blue);
	}
	/*
		Invokes the setup for a debug logging callback so that `stdout` is redirected 
		to the callback. This is used by `Unity` so that debug messages can appear 
		in the console window.
	*/
	void ChromaAnimationAPI::SetLogDelegate(DebugLogPtr fp)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetLogDelegate(fp);
	}
	/*
		Sets the target device to the static color.
	*/
	void ChromaAnimationAPI::SetStaticColor(int deviceType, int device, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetStaticColor(deviceType, device, color);
	}
	/*
		Sets all devices to the static color.
	*/
	void ChromaAnimationAPI::SetStaticColorAll(int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SetStaticColorAll(color);
	}
	/*
		Sets the target device to the static color.
	*/
	void ChromaAnimationAPI::StaticColor(int deviceType, int device, int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StaticColor(deviceType, device, color);
	}
	/*
		Sets all devices to the static color.
	*/
	void ChromaAnimationAPI::StaticColorAll(int color)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StaticColorAll(color);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StaticColorD(double deviceType, double device, double color)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StaticColorD(deviceType, device, color);
	}
	/*
		`PluginStopAll` will automatically stop all animations that are playing.
	*/
	void ChromaAnimationAPI::StopAll()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopAll();
	}
	/*
		Stops animation playback if in progress. Returns the animation id upon success. 
		Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::StopAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimationD(animationId);
	}
	/*
		`PluginStopAnimationName` automatically handles initializing the `ChromaSDK`. 
		The named `.chroma` animation file will be automatically opened. The animation 
		will stop if playing.
	*/
	void ChromaAnimationAPI::StopAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopAnimationName(path);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationNameD(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimationNameD(path);
	}
	/*
		`PluginStopAnimationType` automatically handles initializing the `ChromaSDK`. 
		If any animation is playing for the `deviceType` and `device` combination, 
		it will be stopped.
	*/
	void ChromaAnimationAPI::StopAnimationType(int deviceType, int device)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopAnimationType(deviceType, device);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopAnimationTypeD(double deviceType, double device)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopAnimationTypeD(deviceType, device);
	}
	/*
		`PluginStopComposite` automatically handles initializing the `ChromaSDK`. 
		The named animation files for the `.chroma` set will be automatically opened. 
		The set of animations will be stopped if playing.
	*/
	void ChromaAnimationAPI::StopComposite(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::StopComposite(name);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::StopCompositeD(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::StopCompositeD(name);
	}
	/*
		Return color1 - color2
	*/
	int ChromaAnimationAPI::SubtractColor(const int color1, const int color2)
	{
		if (!_sIsInitializedAPI)
		{
			return 0;
		}
		if (!_sInitialized)
		{
			return 0;
		}
		return UnicodeChromaAnimationAPI::SubtractColor(color1, color2);
	}
	/*
		Subtract the source color from the target color for the frame where the 
		target color is not black. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeys(sourceAnimationId, targetAnimationId, frameId);
	}
	/*
		Subtract the source color from the target color for all frames where the 
		target color is not black. Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Subtract the source color from the target color for all frames where the 
		target color is not black. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Subtract the source color from the target color for all frames where the 
		target color is not black starting at offset for the length of the source. 
		Source and target are referenced by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Subtract the source color from the target color for all frames where the 
		target color is not black starting at offset for the length of the source. 
		Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Subtract the source color from the target color for the frame where the 
		target color is not black. Source and target are referenced by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysName(sourceAnimation, targetAnimation, frameId);
	}
	/*
		Subtract the source color from the target where color is not black for the 
		source frame and target offset frame, reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Subtract the source color from the target where color is not black for the 
		source frame and target offset frame, reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black for all frames. Reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFrames(sourceAnimationId, targetAnimationId);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black for all frames. Reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesName(sourceAnimation, targetAnimation);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesNameD(sourceAnimation, targetAnimation);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black for all frames starting at the target offset for the length of 
		the source. Reference source and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffset(sourceAnimationId, targetAnimationId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black for all frames starting at the target offset for the length of 
		the source. Reference source and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetName(sourceAnimation, targetAnimation, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysAllFramesOffsetNameD(sourceAnimation, targetAnimation, offset);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black from the source frame to the target offset frame. Reference source 
		and target by id.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffset(sourceAnimationId, targetAnimationId, frameId, offset);
	}
	/*
		Subtract the source color from the target color where the target color is 
		not black from the source frame to the target offset frame. Reference source 
		and target by name.
	*/
	void ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetName(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractNonZeroTargetAllKeysOffsetNameD(sourceAnimation, targetAnimation, frameId, offset);
	}
	/*
		Subtract all frames with the min RGB color where the animation color is 
		less than the min threshold AND with the max RGB color where the animation 
		is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGB(const int animationId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGB(animationId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract all frames with the min RGB color where the animation color is 
		less than the min threshold AND with the max RGB color where the animation 
		is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBName(const wchar_t* path, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBName(path, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBNameD(const wchar_t* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxAllFramesRGBNameD(path, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract the specified frame with the min RGB color where the animation 
		color is less than the min threshold AND with the max RGB color where the 
		animation is more than the max threshold. Animation is referenced by id.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGB(const int animationId, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGB(animationId, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Subtract the specified frame with the min RGB color where the animation 
		color is less than the min threshold AND with the max RGB color where the 
		animation is more than the max threshold. Animation is referenced by name.
	*/
	void ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBName(const wchar_t* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBName(path, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBNameD(const wchar_t* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::SubtractThresholdColorsMinMaxRGBNameD(path, frameId, minThreshold, minRed, minGreen, minBlue, maxThreshold, maxRed, maxGreen, maxBlue);
	}
	/*
		Trim the end of the animation. The length of the animation will be the lastFrameId 
		plus one. Reference the animation by id.
	*/
	void ChromaAnimationAPI::TrimEndFrames(int animationId, int lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimEndFrames(animationId, lastFrameId);
	}
	/*
		Trim the end of the animation. The length of the animation will be the lastFrameId 
		plus one. Reference the animation by name.
	*/
	void ChromaAnimationAPI::TrimEndFramesName(const wchar_t* path, int lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimEndFramesName(path, lastFrameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimEndFramesNameD(const wchar_t* path, double lastFrameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::TrimEndFramesNameD(path, lastFrameId);
	}
	/*
		Remove the frame from the animation. Reference animation by id.
	*/
	void ChromaAnimationAPI::TrimFrame(int animationId, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimFrame(animationId, frameId);
	}
	/*
		Remove the frame from the animation. Reference animation by name.
	*/
	void ChromaAnimationAPI::TrimFrameName(const wchar_t* path, int frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimFrameName(path, frameId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimFrameNameD(const wchar_t* path, double frameId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::TrimFrameNameD(path, frameId);
	}
	/*
		Trim the start of the animation starting at frame 0 for the number of frames. 
		Reference the animation by id.
	*/
	void ChromaAnimationAPI::TrimStartFrames(int animationId, int numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimStartFrames(animationId, numberOfFrames);
	}
	/*
		Trim the start of the animation starting at frame 0 for the number of frames. 
		Reference the animation by name.
	*/
	void ChromaAnimationAPI::TrimStartFramesName(const wchar_t* path, int numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::TrimStartFramesName(path, numberOfFrames);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::TrimStartFramesNameD(const wchar_t* path, double numberOfFrames)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::TrimStartFramesNameD(path, numberOfFrames);
	}
	/*
		Uninitializes the `ChromaSDK`. Returns 0 upon success. Returns negative 
		one upon failure.
	*/
	RZRESULT ChromaAnimationAPI::Uninit()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_FAILED;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::Uninit();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::UninitD()
	{
		if (!_sIsInitializedAPI)
		{
			return RZRESULT_FAILED;
		}
		if (!_sInitialized)
		{
			return RZRESULT_SUCCESS;
		}
		RZRESULT result = UnicodeChromaAnimationAPI::UninitD();
		if (result == RZRESULT_SUCCESS)
		{
			_sInitialized = false;
		}
		return result;
	}
	/*
		Unloads `Chroma` effects to free up resources. Returns the animation id 
		upon success. Returns negative one upon failure. Reference the animation 
		by id.
	*/
	int ChromaAnimationAPI::UnloadAnimation(int animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UnloadAnimation(animationId);
	}
	/*
		D suffix for limited data types.
	*/
	double ChromaAnimationAPI::UnloadAnimationD(double animationId)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UnloadAnimationD(animationId);
	}
	/*
		Unload the animation effects. Reference the animation by name.
	*/
	void ChromaAnimationAPI::UnloadAnimationName(const wchar_t* path)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadAnimationName(path);
	}
	/*
		Unload the the composite set of animation effects. Reference the animation 
		by name.
	*/
	void ChromaAnimationAPI::UnloadComposite(const wchar_t* name)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadComposite(name);
	}
	/*
		Unload the Razer Chroma SDK Library before exiting the application.
	*/
	void ChromaAnimationAPI::UnloadLibrarySDK()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadLibrarySDK();
	}
	/*
		Unload the Razer Chroma Streaming Plugin Library before exiting the application.
	*/
	void ChromaAnimationAPI::UnloadLibraryStreamingPlugin()
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UnloadLibraryStreamingPlugin();
	}
	/*
		Updates the `frameId` of the `Chroma` animation referenced by id and sets 
		the `duration` (in seconds). The `color` is expected to be an array of 
		the dimensions for the `deviceType/device`. The `length` parameter is the 
		size of the `color` array. For `EChromaSDKDevice1DEnum` the array size 
		should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should 
		be `MAX ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard 
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the 
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength.
	*/
	int ChromaAnimationAPI::UpdateFrame(int animationId, int frameId, float duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UpdateFrame(animationId, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		Update the `frameId` of the `Chroma` animation referenced by name and sets 
		the `duration` (in seconds). The `color` is expected to be an array of 
		the dimensions for the `deviceType/device`. The `length` parameter is the 
		size of the `color` array. For `EChromaSDKDevice1DEnum` the array size 
		should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array size should 
		be `MAX ROW` times `MAX COLUMN`. Keys are populated only for EChromaSDKDevice2DEnum::DE_Keyboard 
		and EChromaSDKDevice2DEnum::DE_KeyboardExtended. Keys will only use the 
		EChromaSDKDevice2DEnum::DE_Keyboard `MAX_ROW` times `MAX_COLUMN` keysLength. 
		Returns the animation id upon success. Returns negative one upon failure.
	*/
	int ChromaAnimationAPI::UpdateFrameName(const wchar_t* path, int frameId, float duration, int* colors, int length, int* keys, int keysLength)
	{
		if (!_sIsInitializedAPI)
		{
			return -1;
		}
		if (!_sInitialized)
		{
			return -1;
		}
		return UnicodeChromaAnimationAPI::UpdateFrameName(path, frameId, duration, colors, length, keys, keysLength);
	}
	/*
		On by default, `UseForwardChromaEvents` sends the animation name to `CoreSetEventName` 
		automatically when `PlayAnimationName` is called.
	*/
	void ChromaAnimationAPI::UseForwardChromaEvents(bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseForwardChromaEvents(flag);
	}
	/*
		When the idle animation flag is true, when no other animations are playing, 
		the idle animation will be used. The idle animation will not be affected 
		by the API calls to PluginIsPlaying, PluginStopAnimationType, PluginGetPlayingAnimationId, 
		and PluginGetPlayingAnimationCount. Then the idle animation flag is false, 
		the idle animation is disabled. `Device` uses `EChromaSDKDeviceEnum` enums.
	*/
	void ChromaAnimationAPI::UseIdleAnimation(int device, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseIdleAnimation(device, flag);
	}
	/*
		Set idle animation flag for all devices.
	*/
	void ChromaAnimationAPI::UseIdleAnimations(bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UseIdleAnimations(flag);
	}
	/*
		Set preloading animation flag, which is set to true by default. Reference 
		animation by id.
	*/
	void ChromaAnimationAPI::UsePreloading(int animationId, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UsePreloading(animationId, flag);
	}
	/*
		Set preloading animation flag, which is set to true by default. Reference 
		animation by name.
	*/
	void ChromaAnimationAPI::UsePreloadingName(const wchar_t* path, bool flag)
	{
		if (!_sIsInitializedAPI)
		{
			return;
		}
		if (!_sInitialized)
		{
			return;
		}
		UnicodeChromaAnimationAPI::UsePreloadingName(path, flag);
	}
#pragma endregion

}

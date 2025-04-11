#pragma once

#include "ChromaSDKPluginTypes.h"

namespace ChromaSDK
{
	/* Setup log mechanism */
	typedef void (*DebugLogPtr)(const wchar_t*);
	void LogDebug(const wchar_t *text, ...);
	void LogError(const wchar_t *text, ...);
	/* End of setup log mechanism */

	class ChromaAnimationAPI
	{
	public:

                
#pragma region API declare prototypes
		/*
			Return the sum of colors
		*/
		static int AddColor(const int color1, const int color2);
		/*
			Adds a frame to the `Chroma` animation and sets the `duration` (in seconds). 
			The `color` is expected to be an array of the dimensions for the `deviceType/device`. 
			The `length` parameter is the size of the `color` array. For `EChromaSDKDevice1DEnum` 
			the array size should be `MAX LEDS`. For `EChromaSDKDevice2DEnum` the array 
			size should be `MAX ROW` times `MAX COLUMN`. Returns the animation id upon 
			success. Returns negative one upon failure.
		*/
		static int AddFrame(int animationId, float duration, int* colors, int length);
		/*
			Add source color to target where color is not black for frame id, reference 
			source and target by id.
		*/
		static void AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Add source color to target where color is not black for all frames, reference 
			source and target by id.
		*/
		static void AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Add source color to target where color is not black for all frames, reference 
			source and target by name.
		*/
		static void AddNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Add source color to target where color is not black for all frames starting 
			at offset for the length of the source, reference source and target by 
			id.
		*/
		static void AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Add source color to target where color is not black for all frames starting 
			at offset for the length of the source, reference source and target by 
			name.
		*/
		static void AddNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Add source color to target where color is not black for frame id, reference 
			source and target by name.
		*/
		static void AddNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			Add source color to target where color is not black for the source frame 
			and target offset frame, reference source and target by id.
		*/
		static void AddNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Add source color to target where color is not black for the source frame 
			and target offset frame, reference source and target by name.
		*/
		static void AddNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Add source color to target where the target color is not black for all frames, 
			reference source and target by id.
		*/
		static void AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Add source color to target where the target color is not black for all frames, 
			reference source and target by name.
		*/
		static void AddNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Add source color to target where the target color is not black for all frames 
			starting at offset for the length of the source, reference source and target 
			by id.
		*/
		static void AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Add source color to target where the target color is not black for all frames 
			starting at offset for the length of the source, reference source and target 
			by name.
		*/
		static void AddNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Add source color to target where target color is not blank from the source 
			frame to the target offset frame, reference source and target by id.
		*/
		static void AddNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Add source color to target where target color is not blank from the source 
			frame to the target offset frame, reference source and target by name.
		*/
		static void AddNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double AddNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Append all source frames to the target animation, reference source and target 
			by id.
		*/
		static void AppendAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Append all source frames to the target animation, reference source and target 
			by name.
		*/
		static void AppendAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double AppendAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			`PluginClearAll` will issue a `CLEAR` effect for all devices.
		*/
		static void ClearAll();
		/*
			`PluginClearAnimationType` will issue a `CLEAR` effect for the given device.
		*/
		static void ClearAnimationType(int deviceType, int device);
		/*
			`PluginCloseAll` closes all open animations so they can be reloaded from 
			disk. The set of animations will be stopped if playing.
		*/
		static void CloseAll();
		/*
			Closes the `Chroma` animation to free up resources referenced by id. Returns 
			the animation id upon success. Returns negative one upon failure. This 
			might be used while authoring effects if there was a change necessitating 
			re-opening the animation. The animation id can no longer be used once closed.
		*/
		static int CloseAnimation(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double CloseAnimationD(double animationId);
		/*
			Closes the `Chroma` animation referenced by name so that the animation can 
			be reloaded from disk.
		*/
		static void CloseAnimationName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double CloseAnimationNameD(const wchar_t* path);
		/*
			`PluginCloseComposite` closes a set of animations so they can be reloaded 
			from disk. The set of animations will be stopped if playing.
		*/
		static void CloseComposite(const wchar_t* name);
		/*
			D suffix for limited data types.
		*/
		static double CloseCompositeD(const wchar_t* name);
		/*
			Copy source animation to target animation for the given frame. Source and 
			target are referenced by id.
		*/
		static void CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Copy source animation to target animation for the given frame. Source and 
			target are referenced by id.
		*/
		static void CopyAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			Copy animation to named target animation in memory. If target animation 
			exists, close first. Source is referenced by id.
		*/
		static int CopyAnimation(int sourceAnimationId, const wchar_t* targetAnimation);
		/*
			Copy animation to named target animation in memory. If target animation 
			exists, close first. Source is referenced by name.
		*/
		static void CopyAnimationName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyAnimationNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy blue channel to other channels for all frames. Intensity range is 0.0 
			to 1.0. Reference the animation by id.
		*/
		static void CopyBlueChannelAllFrames(int animationId, float redIntensity, float greenIntensity);
		/*
			Copy blue channel to other channels for all frames. Intensity range is 0.0 
			to 1.0. Reference the animation by name.
		*/
		static void CopyBlueChannelAllFramesName(const wchar_t* path, float redIntensity, float greenIntensity);
		/*
			D suffix for limited data types.
		*/
		static double CopyBlueChannelAllFramesNameD(const wchar_t* path, double redIntensity, double greenIntensity);
		/*
			Copy green channel to other channels for all frames. Intensity range is 
			0.0 to 1.0. Reference the animation by id.
		*/
		static void CopyGreenChannelAllFrames(int animationId, float redIntensity, float blueIntensity);
		/*
			Copy green channel to other channels for all frames. Intensity range is 
			0.0 to 1.0. Reference the animation by name.
		*/
		static void CopyGreenChannelAllFramesName(const wchar_t* path, float redIntensity, float blueIntensity);
		/*
			D suffix for limited data types.
		*/
		static double CopyGreenChannelAllFramesNameD(const wchar_t* path, double redIntensity, double blueIntensity);
		/*
			Copy animation key color from the source animation to the target animation 
			for the given frame. Reference the source and target by id.
		*/
		static void CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey);
		/*
			Copy animation key color from the source animation to the target animation 
			for all frames. Reference the source and target by id.
		*/
		static void CopyKeyColorAllFrames(int sourceAnimationId, int targetAnimationId, int rzkey);
		/*
			Copy animation key color from the source animation to the target animation 
			for all frames. Reference the source and target by name.
		*/
		static void CopyKeyColorAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int rzkey);
		/*
			D suffix for limited data types.
		*/
		static double CopyKeyColorAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double rzkey);
		/*
			Copy animation key color from the source animation to the target animation 
			for all frames, starting at the offset for the length of the source animation. 
			Source and target are referenced by id.
		*/
		static void CopyKeyColorAllFramesOffset(int sourceAnimationId, int targetAnimationId, int rzkey, int offset);
		/*
			Copy animation key color from the source animation to the target animation 
			for all frames, starting at the offset for the length of the source animation. 
			Source and target are referenced by name.
		*/
		static void CopyKeyColorAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int rzkey, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyKeyColorAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double rzkey, double offset);
		/*
			Copy animation key color from the source animation to the target animation 
			for the given frame.
		*/
		static void CopyKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey);
		/*
			D suffix for limited data types.
		*/
		static double CopyKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation for the given frame. Reference the source and target by 
			id.
		*/
		static void CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameId, const int* keys, int size);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation for all frames. Reference the source and target by id.
		*/
		static void CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, const int* keys, int size);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation for all frames. Reference the source and target by name.
		*/
		static void CopyKeysColorAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, const int* keys, int size);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation for the given frame. Reference the source and target by 
			name.
		*/
		static void CopyKeysColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, const int* keys, int size);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation from the source frame to the target frame. Reference the 
			source and target by id.
		*/
		static void CopyKeysColorOffset(int sourceAnimationId, int targetAnimationId, int sourceFrameId, int targetFrameId, const int* keys, int size);
		/*
			Copy animation color for a set of keys from the source animation to the 
			target animation from the source frame to the target frame. Reference the 
			source and target by name.
		*/
		static void CopyKeysColorOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int sourceFrameId, int targetFrameId, const int* keys, int size);
		/*
			Copy source animation to target animation for the given frame. Source and 
			target are referenced by id.
		*/
		static void CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Copy nonzero colors from a source animation to a target animation for all 
			frames. Reference source and target by id.
		*/
		static void CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Copy nonzero colors from a source animation to a target animation for all 
			frames. Reference source and target by name.
		*/
		static void CopyNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy nonzero colors from a source animation to a target animation for all 
			frames starting at the offset for the length of the source animation. The 
			source and target are referenced by id.
		*/
		static void CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Copy nonzero colors from a source animation to a target animation for all 
			frames starting at the offset for the length of the source animation. The 
			source and target are referenced by name.
		*/
		static void CopyNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Copy nonzero colors from source animation to target animation for the specified 
			frame. Source and target are referenced by id.
		*/
		static void CopyNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroAllKeysNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId);
		/*
			Copy nonzero colors from the source animation to the target animation from 
			the source frame to the target offset frame. Source and target are referenced 
			by id.
		*/
		static void CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Copy nonzero colors from the source animation to the target animation from 
			the source frame to the target offset frame. Source and target are referenced 
			by name.
		*/
		static void CopyNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Copy animation key color from the source animation to the target animation 
			for the given frame where color is not zero.
		*/
		static void CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey);
		/*
			Copy animation key color from the source animation to the target animation 
			for the given frame where color is not zero.
		*/
		static void CopyNonZeroKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for the specified frame. Source and target 
			are referenced by id.
		*/
		static void CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for all frames. Source and target are referenced 
			by id.
		*/
		static void CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for all frames. Source and target are referenced 
			by name.
		*/
		static void CopyNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for all frames. Source and target are referenced 
			by name.
		*/
		static void CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for all frames starting at the target offset 
			for the length of the source animation. Source and target animations are 
			referenced by name.
		*/
		static void CopyNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for the specified frame. The source and target 
			are referenced by name.
		*/
		static void CopyNonZeroTargetAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroTargetAllKeysNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for the specified source frame and target offset 
			frame. The source and target are referenced by id.
		*/
		static void CopyNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is nonzero for the specified source frame and target offset 
			frame. The source and target are referenced by name.
		*/
		static void CopyNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is zero for all frames. Source and target are referenced 
			by id.
		*/
		static void CopyNonZeroTargetZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Copy nonzero colors from the source animation to the target animation where 
			the target color is zero for all frames. Source and target are referenced 
			by name.
		*/
		static void CopyNonZeroTargetZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyNonZeroTargetZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy red channel to other channels for all frames. Intensity range is 0.0 
			to 1.0. Reference the animation by id.
		*/
		static void CopyRedChannelAllFrames(int animationId, float greenIntensity, float blueIntensity);
		/*
			Copy green channel to other channels for all frames. Intensity range is 
			0.0 to 1.0. Reference the animation by name.
		*/
		static void CopyRedChannelAllFramesName(const wchar_t* path, float greenIntensity, float blueIntensity);
		/*
			D suffix for limited data types.
		*/
		static double CopyRedChannelAllFramesNameD(const wchar_t* path, double greenIntensity, double blueIntensity);
		/*
			Copy zero colors from source animation to target animation for the frame. 
			Source and target are referenced by id.
		*/
		static void CopyZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Copy zero colors from source animation to target animation for all frames. 
			Source and target are referenced by id.
		*/
		static void CopyZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Copy zero colors from source animation to target animation for all frames. 
			Source and target are referenced by name.
		*/
		static void CopyZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy zero colors from source animation to target animation for all frames 
			starting at the target offset for the length of the source animation. Source 
			and target are referenced by id.
		*/
		static void CopyZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Copy zero colors from source animation to target animation for all frames 
			starting at the target offset for the length of the source animation. Source 
			and target are referenced by name.
		*/
		static void CopyZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double CopyZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Copy zero colors from source animation to target animation for the frame. 
			Source and target are referenced by name.
		*/
		static void CopyZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			Copy zero colors from source animation to target animation for the frame 
			id starting at the target offset for the length of the source animation. 
			Source and target are referenced by id.
		*/
		static void CopyZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Copy zero colors from source animation to target animation for the frame 
			id starting at the target offset for the length of the source animation. 
			Source and target are referenced by name.
		*/
		static void CopyZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			Copy zero key color from source animation to target animation for the specified 
			frame. Source and target are referenced by id.
		*/
		static void CopyZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameId, int rzkey);
		/*
			Copy zero key color from source animation to target animation for the specified 
			frame. Source and target are referenced by name.
		*/
		static void CopyZeroKeyColorName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int rzkey);
		/*
			D suffix for limited data types.
		*/
		static double CopyZeroKeyColorNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double rzkey);
		/*
			Copy nonzero color from source animation to target animation where target 
			is zero for the frame. Source and target are referenced by id.
		*/
		static void CopyZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Copy nonzero color from source animation to target animation where target 
			is zero for all frames. Source and target are referenced by id.
		*/
		static void CopyZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Copy nonzero color from source animation to target animation where target 
			is zero for all frames. Source and target are referenced by name.
		*/
		static void CopyZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double CopyZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Copy nonzero color from source animation to target animation where target 
			is zero for the frame. Source and target are referenced by name.
		*/
		static void CopyZeroTargetAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateChromaLinkEffect(ChromaSDK::ChromaLink::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateEffect(RZDEVICEID DeviceId, ChromaSDK::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateHeadsetEffect(ChromaSDK::Headset::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateKeyboardEffect(ChromaSDK::Keyboard::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateKeypadEffect(ChromaSDK::Keypad::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateMouseEffect(ChromaSDK::Mouse::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreCreateMousepadEffect(ChromaSDK::Mousepad::EFFECT_TYPE Effect, PRZPARAM pParam, RZEFFECTID* pEffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreDeleteEffect(RZEFFECTID EffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreInit();
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreInitSDK(ChromaSDK::APPINFOTYPE* AppInfo);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreIsActive(BOOL& Active);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreIsConnected(ChromaSDK::DEVICE_INFO_TYPE& DeviceInfo);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreQueryDevice(RZDEVICEID DeviceId, ChromaSDK::DEVICE_INFO_TYPE& DeviceInfo);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreSetEffect(RZEFFECTID EffectId);
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreSetEventName(LPCTSTR Name);
		/*
			Begin broadcasting Chroma RGB data using the stored stream key as the endpoint. 
			Intended for Cloud Gaming Platforms, restore the streaming key when the 
			game instance is launched to continue streaming. streamId is a null terminated 
			string streamKey is a null terminated string StreamGetStatus() should return 
			the READY status to use this method.
		*/
		static bool CoreStreamBroadcast(const char* streamId, const char* streamKey);
		/*
			End broadcasting Chroma RGB data. StreamGetStatus() should return the BROADCASTING 
			status to use this method.
		*/
		static bool CoreStreamBroadcastEnd();
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
		static void CoreStreamGetAuthShortcode(char* shortcode, unsigned char* length, const wchar_t* platform, const wchar_t* title);
		/*
			focus: Pass the address of a preallocated character buffer to get the stream 
			focus. The buffer should have a length of 48 length: Length will return 
			as zero if the stream focus could not be obtained. If length is greater 
			than zero, it will be the length of the returned stream focus.
		*/
		static bool CoreStreamGetFocus(char* focus, unsigned char* length);
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
		static void CoreStreamGetId(const char* shortcode, char* streamId, unsigned char* length);
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
		static void CoreStreamGetKey(const char* shortcode, char* streamKey, unsigned char* length);
		/*
			Returns StreamStatus, the current status of the service
		*/
		static ChromaSDK::Stream::StreamStatusType CoreStreamGetStatus();
		/*
			Convert StreamStatusType to a printable string
		*/
		static const char* CoreStreamGetStatusString(ChromaSDK::Stream::StreamStatusType status);
		/*
			This prevents the stream id and stream key from being obtained through the 
			shortcode. This closes the auth window. shortcode is a null terminated 
			string. StreamGetStatus() should return the READY status to use this method. 
			returns success when shortcode has been released
		*/
		static bool CoreStreamReleaseShortcode(const char* shortcode);
		/*
			The focus is a null terminated string. Set the focus identifer for the application 
			designated to automatically change the streaming state. Returns true on 
			success.
		*/
		static bool CoreStreamSetFocus(const char* focus);
		/*
			Returns true if the Chroma streaming is supported. If false is returned, 
			avoid calling stream methods.
		*/
		static bool CoreStreamSupportsStreaming();
		/*
			Begin watching the Chroma RGB data using streamID parameter. streamId is 
			a null terminated string. StreamGetStatus() should return the READY status 
			to use this method.
		*/
		static bool CoreStreamWatch(const char* streamId, unsigned long long timestamp);
		/*
			End watching Chroma RGB data stream. StreamGetStatus() should return the 
			WATCHING status to use this method.
		*/
		static bool CoreStreamWatchEnd();
		/*
			Direct access to low level API.
		*/
		static RZRESULT CoreUnInit();
		/*
			Creates a `Chroma` animation at the given path. The `deviceType` parameter 
			uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter uses 
			`EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer, respective 
			to the `deviceType`. Returns the animation id upon success. Returns negative 
			one upon failure. Saves a `Chroma` animation file with the `.chroma` extension 
			at the given path. Returns the animation id upon success. Returns negative 
			one upon failure.
		*/
		static int CreateAnimation(const wchar_t* path, int deviceType, int device);
		/*
			Creates a `Chroma` animation in memory without creating a file. The `deviceType` 
			parameter uses `EChromaSDKDeviceTypeEnum` as an integer. The `device` parameter 
			uses `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` as an integer, 
			respective to the `deviceType`. Returns the animation id upon success. 
			Returns negative one upon failure. Returns the animation id upon success. 
			Returns negative one upon failure.
		*/
		static int CreateAnimationInMemory(int deviceType, int device);
		/*
			Create a device specific effect.
		*/
		static RZRESULT CreateEffect(RZDEVICEID deviceId, ChromaSDK::EFFECT_TYPE effect, int* colors, int size, ChromaSDK::FChromaSDKGuid* effectId);
		/*
			Delete an effect given the effect id.
		*/
		static RZRESULT DeleteEffect(const ChromaSDK::FChromaSDKGuid& effectId);
		/*
			Duplicate the first animation frame so that the animation length matches 
			the frame count. Animation is referenced by id.
		*/
		static void DuplicateFirstFrame(int animationId, int frameCount);
		/*
			Duplicate the first animation frame so that the animation length matches 
			the frame count. Animation is referenced by name.
		*/
		static void DuplicateFirstFrameName(const wchar_t* path, int frameCount);
		/*
			D suffix for limited data types.
		*/
		static double DuplicateFirstFrameNameD(const wchar_t* path, double frameCount);
		/*
			Duplicate all the frames of the animation to double the animation length. 
			Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on. 
			The animation is referenced by id.
		*/
		static void DuplicateFrames(int animationId);
		/*
			Duplicate all the frames of the animation to double the animation length. 
			Frame 1 becomes frame 1 and 2. Frame 2 becomes frame 3 and 4. And so on. 
			The animation is referenced by name.
		*/
		static void DuplicateFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double DuplicateFramesNameD(const wchar_t* path);
		/*
			Duplicate all the animation frames in reverse so that the animation plays 
			forwards and backwards. Animation is referenced by id.
		*/
		static void DuplicateMirrorFrames(int animationId);
		/*
			Duplicate all the animation frames in reverse so that the animation plays 
			forwards and backwards. Animation is referenced by name.
		*/
		static void DuplicateMirrorFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double DuplicateMirrorFramesNameD(const wchar_t* path);
		/*
			Fade the animation to black starting at the fade frame index to the end 
			of the animation. Animation is referenced by id.
		*/
		static void FadeEndFrames(int animationId, int fade);
		/*
			Fade the animation to black starting at the fade frame index to the end 
			of the animation. Animation is referenced by name.
		*/
		static void FadeEndFramesName(const wchar_t* path, int fade);
		/*
			D suffix for limited data types.
		*/
		static double FadeEndFramesNameD(const wchar_t* path, double fade);
		/*
			Fade the animation from black to full color starting at 0 to the fade frame 
			index. Animation is referenced by id.
		*/
		static void FadeStartFrames(int animationId, int fade);
		/*
			Fade the animation from black to full color starting at 0 to the fade frame 
			index. Animation is referenced by name.
		*/
		static void FadeStartFramesName(const wchar_t* path, int fade);
		/*
			D suffix for limited data types.
		*/
		static double FadeStartFramesNameD(const wchar_t* path, double fade);
		/*
			Set the RGB value for all colors in the specified frame. Animation is referenced 
			by id.
		*/
		static void FillColor(int animationId, int frameId, int color);
		/*
			Set the RGB value for all colors for all frames. Animation is referenced 
			by id.
		*/
		static void FillColorAllFrames(int animationId, int color);
		/*
			Set the RGB value for all colors for all frames. Animation is referenced 
			by name.
		*/
		static void FillColorAllFramesName(const wchar_t* path, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillColorAllFramesNameD(const wchar_t* path, double color);
		/*
			Set the RGB value for all colors for all frames. Use the range of 0 to 255 
			for red, green, and blue parameters. Animation is referenced by id.
		*/
		static void FillColorAllFramesRGB(int animationId, int red, int green, int blue);
		/*
			Set the RGB value for all colors for all frames. Use the range of 0 to 255 
			for red, green, and blue parameters. Animation is referenced by name.
		*/
		static void FillColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue);
		/*
			Set the RGB value for all colors in the specified frame. Animation is referenced 
			by name.
		*/
		static void FillColorName(const wchar_t* path, int frameId, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillColorNameD(const wchar_t* path, double frameId, double color);
		/*
			Set the RGB value for all colors in the specified frame. Animation is referenced 
			by id.
		*/
		static void FillColorRGB(int animationId, int frameId, int red, int green, int blue);
		/*
			Set the RGB value for all colors in the specified frame. Animation is referenced 
			by name.
		*/
		static void FillColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors in the specified 
			frame. Animation is referenced by id.
		*/
		static void FillNonZeroColor(int animationId, int frameId, int color);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors for all frames. 
			Animation is referenced by id.
		*/
		static void FillNonZeroColorAllFrames(int animationId, int color);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors for all frames. 
			Animation is referenced by name.
		*/
		static void FillNonZeroColorAllFramesName(const wchar_t* path, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillNonZeroColorAllFramesNameD(const wchar_t* path, double color);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors for all frames. 
			Use the range of 0 to 255 for red, green, and blue parameters. Animation 
			is referenced by id.
		*/
		static void FillNonZeroColorAllFramesRGB(int animationId, int red, int green, int blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors for all frames. 
			Use the range of 0 to 255 for red, green, and blue parameters. Animation 
			is referenced by name.
		*/
		static void FillNonZeroColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillNonZeroColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors in the specified 
			frame. Animation is referenced by name.
		*/
		static void FillNonZeroColorName(const wchar_t* path, int frameId, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillNonZeroColorNameD(const wchar_t* path, double frameId, double color);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors in the specified 
			frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation 
			is referenced by id.
		*/
		static void FillNonZeroColorRGB(int animationId, int frameId, int red, int green, int blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Set the RGB value for a subset of colors in the specified 
			frame. Use the range of 0 to 255 for red, green, and blue parameters. Animation 
			is referenced by name.
		*/
		static void FillNonZeroColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillNonZeroColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			Fill the frame with random RGB values for the given frame. Animation is 
			referenced by id.
		*/
		static void FillRandomColors(int animationId, int frameId);
		/*
			Fill the frame with random RGB values for all frames. Animation is referenced 
			by id.
		*/
		static void FillRandomColorsAllFrames(int animationId);
		/*
			Fill the frame with random RGB values for all frames. Animation is referenced 
			by name.
		*/
		static void FillRandomColorsAllFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double FillRandomColorsAllFramesNameD(const wchar_t* path);
		/*
			Fill the frame with random black and white values for the specified frame. 
			Animation is referenced by id.
		*/
		static void FillRandomColorsBlackAndWhite(int animationId, int frameId);
		/*
			Fill the frame with random black and white values for all frames. Animation 
			is referenced by id.
		*/
		static void FillRandomColorsBlackAndWhiteAllFrames(int animationId);
		/*
			Fill the frame with random black and white values for all frames. Animation 
			is referenced by name.
		*/
		static void FillRandomColorsBlackAndWhiteAllFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double FillRandomColorsBlackAndWhiteAllFramesNameD(const wchar_t* path);
		/*
			Fill the frame with random black and white values for the specified frame. 
			Animation is referenced by name.
		*/
		static void FillRandomColorsBlackAndWhiteName(const wchar_t* path, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double FillRandomColorsBlackAndWhiteNameD(const wchar_t* path, double frameId);
		/*
			Fill the frame with random RGB values for the given frame. Animation is 
			referenced by name.
		*/
		static void FillRandomColorsName(const wchar_t* path, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double FillRandomColorsNameD(const wchar_t* path, double frameId);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by id.
		*/
		static void FillThresholdColors(int animationId, int frameId, int threshold, int color);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			RGB threshold. Animation is referenced by id.
		*/
		static void FillThresholdColorsAllFrames(int animationId, int threshold, int color);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			RGB threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsAllFramesName(const wchar_t* path, int threshold, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsAllFramesNameD(const wchar_t* path, double threshold, double color);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			threshold. Animation is referenced by id.
		*/
		static void FillThresholdColorsAllFramesRGB(int animationId, int threshold, int red, int green, int blue);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsAllFramesRGBName(const wchar_t* path, int threshold, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsAllFramesRGBNameD(const wchar_t* path, double threshold, double red, double green, double blue);
		/*
			Fill all frames with the min RGB color where the animation color is less 
			than the min threshold AND with the max RGB color where the animation is 
			more than the max threshold. Animation is referenced by id.
		*/
		static void FillThresholdColorsMinMaxAllFramesRGB(int animationId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
		/*
			Fill all frames with the min RGB color where the animation color is less 
			than the min threshold AND with the max RGB color where the animation is 
			more than the max threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsMinMaxAllFramesRGBName(const wchar_t* path, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsMinMaxAllFramesRGBNameD(const wchar_t* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue);
		/*
			Fill the specified frame with the min RGB color where the animation color 
			is less than the min threshold AND with the max RGB color where the animation 
			is more than the max threshold. Animation is referenced by id.
		*/
		static void FillThresholdColorsMinMaxRGB(int animationId, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
		/*
			Fill the specified frame with the min RGB color where the animation color 
			is less than the min threshold AND with the max RGB color where the animation 
			is more than the max threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsMinMaxRGBName(const wchar_t* path, int frameId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsMinMaxRGBNameD(const wchar_t* path, double frameId, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsName(const wchar_t* path, int frameId, int threshold, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsNameD(const wchar_t* path, double frameId, double threshold, double color);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by id.
		*/
		static void FillThresholdColorsRGB(int animationId, int frameId, int threshold, int red, int green, int blue);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by name.
		*/
		static void FillThresholdColorsRGBName(const wchar_t* path, int frameId, int threshold, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdColorsRGBNameD(const wchar_t* path, double frameId, double threshold, double red, double green, double blue);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			RGB threshold. Animation is referenced by id.
		*/
		static void FillThresholdRGBColorsAllFramesRGB(int animationId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
		/*
			Fill all frames with RGB color where the animation color is less than the 
			RGB threshold. Animation is referenced by name.
		*/
		static void FillThresholdRGBColorsAllFramesRGBName(const wchar_t* path, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdRGBColorsAllFramesRGBNameD(const wchar_t* path, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by id.
		*/
		static void FillThresholdRGBColorsRGB(int animationId, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
		/*
			Fill the specified frame with RGB color where the animation color is less 
			than the RGB threshold. Animation is referenced by name.
		*/
		static void FillThresholdRGBColorsRGBName(const wchar_t* path, int frameId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillThresholdRGBColorsRGBNameD(const wchar_t* path, double frameId, double redThreshold, double greenThreshold, double blueThreshold, double red, double green, double blue);
		/*
			Fill the specified frame with RGB color where the animation color is zero. 
			Animation is referenced by id.
		*/
		static void FillZeroColor(int animationId, int frameId, int color);
		/*
			Fill all frames with RGB color where the animation color is zero. Animation 
			is referenced by id.
		*/
		static void FillZeroColorAllFrames(int animationId, int color);
		/*
			Fill all frames with RGB color where the animation color is zero. Animation 
			is referenced by name.
		*/
		static void FillZeroColorAllFramesName(const wchar_t* path, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillZeroColorAllFramesNameD(const wchar_t* path, double color);
		/*
			Fill all frames with RGB color where the animation color is zero. Animation 
			is referenced by id.
		*/
		static void FillZeroColorAllFramesRGB(int animationId, int red, int green, int blue);
		/*
			Fill all frames with RGB color where the animation color is zero. Animation 
			is referenced by name.
		*/
		static void FillZeroColorAllFramesRGBName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillZeroColorAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue);
		/*
			Fill the specified frame with RGB color where the animation color is zero. 
			Animation is referenced by name.
		*/
		static void FillZeroColorName(const wchar_t* path, int frameId, int color);
		/*
			D suffix for limited data types.
		*/
		static double FillZeroColorNameD(const wchar_t* path, double frameId, double color);
		/*
			Fill the specified frame with RGB color where the animation color is zero. 
			Animation is referenced by id.
		*/
		static void FillZeroColorRGB(int animationId, int frameId, int red, int green, int blue);
		/*
			Fill the specified frame with RGB color where the animation color is zero. 
			Animation is referenced by name.
		*/
		static void FillZeroColorRGBName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double FillZeroColorRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			Get the animation color for a frame given the `1D` `led`. The `led` should 
			be greater than or equal to 0 and less than the `MaxLeds`. Animation is 
			referenced by id.
		*/
		static int Get1DColor(int animationId, int frameId, int led);
		/*
			Get the animation color for a frame given the `1D` `led`. The `led` should 
			be greater than or equal to 0 and less than the `MaxLeds`. Animation is 
			referenced by name.
		*/
		static int Get1DColorName(const wchar_t* path, int frameId, int led);
		/*
			D suffix for limited data types.
		*/
		static double Get1DColorNameD(const wchar_t* path, double frameId, double led);
		/*
			Get the animation color for a frame given the `2D` `row` and `column`. The 
			`row` should be greater than or equal to 0 and less than the `MaxRow`. 
			The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
			Animation is referenced by id.
		*/
		static int Get2DColor(int animationId, int frameId, int row, int column);
		/*
			Get the animation color for a frame given the `2D` `row` and `column`. The 
			`row` should be greater than or equal to 0 and less than the `MaxRow`. 
			The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
			Animation is referenced by name.
		*/
		static int Get2DColorName(const wchar_t* path, int frameId, int row, int column);
		/*
			D suffix for limited data types.
		*/
		static double Get2DColorNameD(const wchar_t* path, double frameId, double row, double column);
		/*
			Get the animation id for the named animation.
		*/
		static int GetAnimation(const wchar_t* name);
		/*
			`PluginGetAnimationCount` will return the number of loaded animations.
		*/
		static int GetAnimationCount();
		/*
			D suffix for limited data types.
		*/
		static double GetAnimationD(const wchar_t* name);
		/*
			`PluginGetAnimationId` will return the `animationId` given the `index` of 
			the loaded animation. The `index` is zero-based and less than the number 
			returned by `PluginGetAnimationCount`. Use `PluginGetAnimationName` to 
			get the name of the animation.
		*/
		static int GetAnimationId(int index);
		/*
			`PluginGetAnimationName` takes an `animationId` and returns the name of 
			the animation of the `.chroma` animation file. If a name is not available 
			then an empty string will be returned.
		*/
		static const wchar_t* GetAnimationName(int animationId);
		/*
			Get the current frame of the animation referenced by id.
		*/
		static int GetCurrentFrame(int animationId);
		/*
			Get the current frame of the animation referenced by name.
		*/
		static int GetCurrentFrameName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double GetCurrentFrameNameD(const wchar_t* path);
		/*
			Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma` 
			animation respective to the `deviceType`, as an integer upon success. Returns 
			negative one upon failure.
		*/
		static int GetDevice(int animationId);
		/*
			Returns the `EChromaSDKDevice1DEnum` or `EChromaSDKDevice2DEnum` of a `Chroma` 
			animation respective to the `deviceType`, as an integer upon success. Returns 
			negative one upon failure.
		*/
		static int GetDeviceName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double GetDeviceNameD(const wchar_t* path);
		/*
			Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer 
			upon success. Returns negative one upon failure.
		*/
		static int GetDeviceType(int animationId);
		/*
			Returns the `EChromaSDKDeviceTypeEnum` of a `Chroma` animation as an integer 
			upon success. Returns negative one upon failure.
		*/
		static int GetDeviceTypeName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double GetDeviceTypeNameD(const wchar_t* path);
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
		static int GetFrame(int animationId, int frameId, float* duration, int* colors, int length, int* keys, int keysLength);
		/*
			Returns the frame count of a `Chroma` animation upon success. Returns negative 
			one upon failure.
		*/
		static int GetFrameCount(int animationId);
		/*
			Returns the frame count of a `Chroma` animation upon success. Returns negative 
			one upon failure.
		*/
		static int GetFrameCountName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double GetFrameCountNameD(const wchar_t* path);
		/*
			Returns the duration of an animation frame in seconds upon success. Returns 
			zero upon failure.
		*/
		static float GetFrameDuration(int animationId, int frameId);
		/*
			Returns the duration of an animation frame in seconds upon success. Returns 
			zero upon failure.
		*/
		static float GetFrameDurationName(const wchar_t* path, int frameId);
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
		static int GetFrameName(const wchar_t* path, int frameId, float* duration, int* colors, int length, int* keys, int keysLength);
		/*
			Get the color of an animation key for the given frame referenced by id.
		*/
		static int GetKeyColor(int animationId, int frameId, int rzkey);
		/*
			D suffix for limited data types.
		*/
		static double GetKeyColorD(const wchar_t* path, double frameId, double rzkey);
		/*
			Get the color of an animation key for the given frame referenced by name.
		*/
		static int GetKeyColorName(const wchar_t* path, int frameId, int rzkey);
		/*
			Returns `RZRESULT_SUCCESS` if the plugin has been initialized successfully. 
			Returns `RZRESULT_DLL_NOT_FOUND` if core Chroma library is not found. Returns 
			`RZRESULT_DLL_INVALID_SIGNATURE` if core Chroma library has an invalid 
			signature.
		*/
		static RZRESULT GetLibraryLoadedState();
		/*
			D suffix for limited data types.
		*/
		static double GetLibraryLoadedStateD();
		/*
			Returns the `MAX COLUMN` given the `EChromaSDKDevice2DEnum` device as an 
			integer upon success. Returns negative one upon failure.
		*/
		static int GetMaxColumn(int device);
		/*
			D suffix for limited data types.
		*/
		static double GetMaxColumnD(double device);
		/*
			Returns the MAX LEDS given the `EChromaSDKDevice1DEnum` device as an integer 
			upon success. Returns negative one upon failure.
		*/
		static int GetMaxLeds(int device);
		/*
			D suffix for limited data types.
		*/
		static double GetMaxLedsD(double device);
		/*
			Returns the `MAX ROW` given the `EChromaSDKDevice2DEnum` device as an integer 
			upon success. Returns negative one upon failure.
		*/
		static int GetMaxRow(int device);
		/*
			D suffix for limited data types.
		*/
		static double GetMaxRowD(double device);
		/*
			`PluginGetPlayingAnimationCount` will return the number of playing animations.
		*/
		static int GetPlayingAnimationCount();
		/*
			`PluginGetPlayingAnimationId` will return the `animationId` given the `index` 
			of the playing animation. The `index` is zero-based and less than the number 
			returned by `PluginGetPlayingAnimationCount`. Use `PluginGetAnimationName` 
			to get the name of the animation.
		*/
		static int GetPlayingAnimationId(int index);
		/*
			Get the RGB color given red, green, and blue.
		*/
		static int GetRGB(int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double GetRGBD(double red, double green, double blue);
		/*
			Returns the total duration of an animation in seconds upon success. Returns 
			zero upon failure.
		*/
		static float GetTotalDuration(int animationId);
		/*
			Returns the total duration of an animation in seconds upon success. Returns 
			zero upon failure.
		*/
		static float GetTotalDurationName(const wchar_t* path);
		/*
			Check if the animation has loop enabled referenced by id.
		*/
		static bool HasAnimationLoop(int animationId);
		/*
			Check if the animation has loop enabled referenced by name.
		*/
		static bool HasAnimationLoopName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double HasAnimationLoopNameD(const wchar_t* path);
		/*
			Initialize the ChromaSDK. Zero indicates success, otherwise failure. Many 
			API methods auto initialize the ChromaSDK if not already initialized.
		*/
		static RZRESULT Init();
		/*
			D suffix for limited data types.
		*/
		static double InitD();
		/*
			Initialize the ChromaSDK. AppInfo populates the details in Synapse. Zero 
			indicates success, otherwise failure. Many API methods auto initialize 
			the ChromaSDK if not already initialized.
		*/
		static RZRESULT InitSDK(ChromaSDK::APPINFOTYPE* AppInfo);
		/*
			Insert an animation delay by duplicating the frame by the delay number of 
			times. Animation is referenced by id.
		*/
		static void InsertDelay(int animationId, int frameId, int delay);
		/*
			Insert an animation delay by duplicating the frame by the delay number of 
			times. Animation is referenced by name.
		*/
		static void InsertDelayName(const wchar_t* path, int frameId, int delay);
		/*
			D suffix for limited data types.
		*/
		static double InsertDelayNameD(const wchar_t* path, double frameId, double delay);
		/*
			Duplicate the source frame index at the target frame index. Animation is 
			referenced by id.
		*/
		static void InsertFrame(int animationId, int sourceFrame, int targetFrame);
		/*
			Duplicate the source frame index at the target frame index. Animation is 
			referenced by name.
		*/
		static void InsertFrameName(const wchar_t* path, int sourceFrame, int targetFrame);
		/*
			D suffix for limited data types.
		*/
		static double InsertFrameNameD(const wchar_t* path, double sourceFrame, double targetFrame);
		/*
			Invert all the colors at the specified frame. Animation is referenced by 
			id.
		*/
		static void InvertColors(int animationId, int frameId);
		/*
			Invert all the colors for all frames. Animation is referenced by id.
		*/
		static void InvertColorsAllFrames(int animationId);
		/*
			Invert all the colors for all frames. Animation is referenced by name.
		*/
		static void InvertColorsAllFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double InvertColorsAllFramesNameD(const wchar_t* path);
		/*
			Invert all the colors at the specified frame. Animation is referenced by 
			name.
		*/
		static void InvertColorsName(const wchar_t* path, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double InvertColorsNameD(const wchar_t* path, double frameId);
		/*
			Check if the animation is paused referenced by id.
		*/
		static bool IsAnimationPaused(int animationId);
		/*
			Check if the animation is paused referenced by name.
		*/
		static bool IsAnimationPausedName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double IsAnimationPausedNameD(const wchar_t* path);
		/*
			The editor dialog is a non-blocking modal window, this method returns true 
			if the modal window is open, otherwise false.
		*/
		static bool IsDialogOpen();
		/*
			D suffix for limited data types.
		*/
		static double IsDialogOpenD();
		/*
			Returns true if the plugin has been initialized. Returns false if the plugin 
			is uninitialized.
		*/
		static bool IsInitialized();
		/*
			D suffix for limited data types.
		*/
		static double IsInitializedD();
		/*
			If the method can be invoked the method returns true.
		*/
		static bool IsPlatformSupported();
		/*
			D suffix for limited data types.
		*/
		static double IsPlatformSupportedD();
		/*
			`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`. 
			The named `.chroma` animation file will be automatically opened. The method 
			will return whether the animation is playing or not. Animation is referenced 
			by id.
		*/
		static bool IsPlaying(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double IsPlayingD(double animationId);
		/*
			`PluginIsPlayingName` automatically handles initializing the `ChromaSDK`. 
			The named `.chroma` animation file will be automatically opened. The method 
			will return whether the animation is playing or not. Animation is referenced 
			by name.
		*/
		static bool IsPlayingName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double IsPlayingNameD(const wchar_t* path);
		/*
			`PluginIsPlayingType` automatically handles initializing the `ChromaSDK`. 
			If any animation is playing for the `deviceType` and `device` combination, 
			the method will return true, otherwise false.
		*/
		static bool IsPlayingType(int deviceType, int device);
		/*
			D suffix for limited data types.
		*/
		static double IsPlayingTypeD(double deviceType, double device);
		/*
			Do a lerp math operation on a float.
		*/
		static float Lerp(float start, float end, float amt);
		/*
			Lerp from one color to another given t in the range 0.0 to 1.0.
		*/
		static int LerpColor(int from, int to, float t);
		/*
			Loads `Chroma` effects so that the animation can be played immediately. 
			Returns the animation id upon success. Returns negative one upon failure.
		*/
		static int LoadAnimation(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double LoadAnimationD(double animationId);
		/*
			Load the named animation.
		*/
		static void LoadAnimationName(const wchar_t* path);
		/*
			Load a composite set of animations.
		*/
		static void LoadComposite(const wchar_t* name);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color defaults to color. Animation 
			is referenced by id.
		*/
		static void MakeBlankFrames(int animationId, int frameCount, float duration, int color);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color defaults to color. Animation 
			is referenced by name.
		*/
		static void MakeBlankFramesName(const wchar_t* path, int frameCount, float duration, int color);
		/*
			D suffix for limited data types.
		*/
		static double MakeBlankFramesNameD(const wchar_t* path, double frameCount, double duration, double color);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color is random. Animation is referenced 
			by id.
		*/
		static void MakeBlankFramesRandom(int animationId, int frameCount, float duration);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color is random black and white. Animation 
			is referenced by id.
		*/
		static void MakeBlankFramesRandomBlackAndWhite(int animationId, int frameCount, float duration);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color is random black and white. Animation 
			is referenced by name.
		*/
		static void MakeBlankFramesRandomBlackAndWhiteName(const wchar_t* path, int frameCount, float duration);
		/*
			D suffix for limited data types.
		*/
		static double MakeBlankFramesRandomBlackAndWhiteNameD(const wchar_t* path, double frameCount, double duration);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color is random. Animation is referenced 
			by name.
		*/
		static void MakeBlankFramesRandomName(const wchar_t* path, int frameCount, float duration);
		/*
			D suffix for limited data types.
		*/
		static double MakeBlankFramesRandomNameD(const wchar_t* path, double frameCount, double duration);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color defaults to color. Animation 
			is referenced by id.
		*/
		static void MakeBlankFramesRGB(int animationId, int frameCount, float duration, int red, int green, int blue);
		/*
			Make a blank animation for the length of the frame count. Frame duration 
			defaults to the duration. The frame color defaults to color. Animation 
			is referenced by name.
		*/
		static void MakeBlankFramesRGBName(const wchar_t* path, int frameCount, float duration, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double MakeBlankFramesRGBNameD(const wchar_t* path, double frameCount, double duration, double red, double green, double blue);
		/*
			Flips the color grid horizontally for all `Chroma` animation frames. Returns 
			the animation id upon success. Returns negative one upon failure.
		*/
		static int MirrorHorizontally(int animationId);
		/*
			Flips the color grid vertically for all `Chroma` animation frames. This 
			method has no effect for `EChromaSDKDevice1DEnum` devices. Returns the 
			animation id upon success. Returns negative one upon failure.
		*/
		static int MirrorVertically(int animationId);
		/*
			Multiply the color intensity with the lerp result from color 1 to color 
			2 using the frame index divided by the frame count for the `t` parameter. 
			Animation is referenced in id.
		*/
		static void MultiplyColorLerpAllFrames(int animationId, int color1, int color2);
		/*
			Multiply the color intensity with the lerp result from color 1 to color 
			2 using the frame index divided by the frame count for the `t` parameter. 
			Animation is referenced in name.
		*/
		static void MultiplyColorLerpAllFramesName(const wchar_t* path, int color1, int color2);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2);
		/*
			Multiply all the colors in the frame by the intensity value. The valid the 
			intensity range is from 0.0 to 255.0. RGB components are multiplied equally. 
			An intensity of 0.5 would half the color value. Black colors in the frame 
			will not be affected by this method.
		*/
		static void MultiplyIntensity(int animationId, int frameId, float intensity);
		/*
			Multiply all the colors for all frames by the intensity value. The valid 
			the intensity range is from 0.0 to 255.0. RGB components are multiplied 
			equally. An intensity of 0.5 would half the color value. Black colors in 
			the frame will not be affected by this method.
		*/
		static void MultiplyIntensityAllFrames(int animationId, float intensity);
		/*
			Multiply all the colors for all frames by the intensity value. The valid 
			the intensity range is from 0.0 to 255.0. RGB components are multiplied 
			equally. An intensity of 0.5 would half the color value. Black colors in 
			the frame will not be affected by this method.
		*/
		static void MultiplyIntensityAllFramesName(const wchar_t* path, float intensity);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityAllFramesNameD(const wchar_t* path, double intensity);
		/*
			Multiply all frames by the RBG color intensity. Animation is referenced 
			by id.
		*/
		static void MultiplyIntensityAllFramesRGB(int animationId, int red, int green, int blue);
		/*
			Multiply all frames by the RBG color intensity. Animation is referenced 
			by name.
		*/
		static void MultiplyIntensityAllFramesRGBName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityAllFramesRGBNameD(const wchar_t* path, double red, double green, double blue);
		/*
			Multiply the specific frame by the RBG color intensity. Animation is referenced 
			by id.
		*/
		static void MultiplyIntensityColor(int animationId, int frameId, int color);
		/*
			Multiply all frames by the RBG color intensity. Animation is referenced 
			by id.
		*/
		static void MultiplyIntensityColorAllFrames(int animationId, int color);
		/*
			Multiply all frames by the RBG color intensity. Animation is referenced 
			by name.
		*/
		static void MultiplyIntensityColorAllFramesName(const wchar_t* path, int color);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityColorAllFramesNameD(const wchar_t* path, double color);
		/*
			Multiply the specific frame by the RBG color intensity. Animation is referenced 
			by name.
		*/
		static void MultiplyIntensityColorName(const wchar_t* path, int frameId, int color);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityColorNameD(const wchar_t* path, double frameId, double color);
		/*
			Multiply all the colors in the frame by the intensity value. The valid the 
			intensity range is from 0.0 to 255.0. RGB components are multiplied equally. 
			An intensity of 0.5 would half the color value. Black colors in the frame 
			will not be affected by this method.
		*/
		static void MultiplyIntensityName(const wchar_t* path, int frameId, float intensity);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityNameD(const wchar_t* path, double frameId, double intensity);
		/*
			Multiply the specific frame by the RBG color intensity. Animation is referenced 
			by id.
		*/
		static void MultiplyIntensityRGB(int animationId, int frameId, int red, int green, int blue);
		/*
			Multiply the specific frame by the RBG color intensity. Animation is referenced 
			by name.
		*/
		static void MultiplyIntensityRGBName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyIntensityRGBNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			Multiply the specific frame by the color lerp result between color 1 and 
			2 using the frame color value as the `t` value. Animation is referenced 
			by id.
		*/
		static void MultiplyNonZeroTargetColorLerp(int animationId, int frameId, int color1, int color2);
		/*
			Multiply all frames by the color lerp result between color 1 and 2 using 
			the frame color value as the `t` value. Animation is referenced by id.
		*/
		static void MultiplyNonZeroTargetColorLerpAllFrames(int animationId, int color1, int color2);
		/*
			Multiply all frames by the color lerp result between color 1 and 2 using 
			the frame color value as the `t` value. Animation is referenced by name.
		*/
		static void MultiplyNonZeroTargetColorLerpAllFramesName(const wchar_t* path, int color1, int color2);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyNonZeroTargetColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2);
		/*
			Multiply the specific frame by the color lerp result between RGB 1 and 2 
			using the frame color value as the `t` value. Animation is referenced by 
			id.
		*/
		static void MultiplyNonZeroTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2);
		/*
			Multiply the specific frame by the color lerp result between RGB 1 and 2 
			using the frame color value as the `t` value. Animation is referenced by 
			name.
		*/
		static void MultiplyNonZeroTargetColorLerpAllFramesRGBName(const wchar_t* path, int red1, int green1, int blue1, int red2, int green2, int blue2);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyNonZeroTargetColorLerpAllFramesRGBNameD(const wchar_t* path, double red1, double green1, double blue1, double red2, double green2, double blue2);
		/*
			Multiply the specific frame by the color lerp result between color 1 and 
			2 using the frame color value as the `t` value. Animation is referenced 
			by id.
		*/
		static void MultiplyTargetColorLerp(int animationId, int frameId, int color1, int color2);
		/*
			Multiply all frames by the color lerp result between color 1 and 2 using 
			the frame color value as the `t` value. Animation is referenced by id.
		*/
		static void MultiplyTargetColorLerpAllFrames(int animationId, int color1, int color2);
		/*
			Multiply all frames by the color lerp result between color 1 and 2 using 
			the frame color value as the `t` value. Animation is referenced by name.
		*/
		static void MultiplyTargetColorLerpAllFramesName(const wchar_t* path, int color1, int color2);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyTargetColorLerpAllFramesNameD(const wchar_t* path, double color1, double color2);
		/*
			Multiply all frames by the color lerp result between RGB 1 and 2 using the 
			frame color value as the `t` value. Animation is referenced by id.
		*/
		static void MultiplyTargetColorLerpAllFramesRGB(int animationId, int red1, int green1, int blue1, int red2, int green2, int blue2);
		/*
			Multiply all frames by the color lerp result between RGB 1 and 2 using the 
			frame color value as the `t` value. Animation is referenced by name.
		*/
		static void MultiplyTargetColorLerpAllFramesRGBName(const wchar_t* path, int red1, int green1, int blue1, int red2, int green2, int blue2);
		/*
			D suffix for limited data types.
		*/
		static double MultiplyTargetColorLerpAllFramesRGBNameD(const wchar_t* path, double red1, double green1, double blue1, double red2, double green2, double blue2);
		/*
			Multiply the specific frame by the color lerp result between color 1 and 
			2 using the frame color value as the `t` value. Animation is referenced 
			by name.
		*/
		static void MultiplyTargetColorLerpName(const wchar_t* path, int frameId, int color1, int color2);
		/*
			Offset all colors in the frame using the RGB offset. Use the range of -255 
			to 255 for red, green, and blue parameters. Negative values remove color. 
			Positive values add color.
		*/
		static void OffsetColors(int animationId, int frameId, int red, int green, int blue);
		/*
			Offset all colors for all frames using the RGB offset. Use the range of 
			-255 to 255 for red, green, and blue parameters. Negative values remove 
			color. Positive values add color.
		*/
		static void OffsetColorsAllFrames(int animationId, int red, int green, int blue);
		/*
			Offset all colors for all frames using the RGB offset. Use the range of 
			-255 to 255 for red, green, and blue parameters. Negative values remove 
			color. Positive values add color.
		*/
		static void OffsetColorsAllFramesName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double OffsetColorsAllFramesNameD(const wchar_t* path, double red, double green, double blue);
		/*
			Offset all colors in the frame using the RGB offset. Use the range of -255 
			to 255 for red, green, and blue parameters. Negative values remove color. 
			Positive values add color.
		*/
		static void OffsetColorsName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double OffsetColorsNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Offset a subset of colors in the frame using the RGB offset. 
			Use the range of -255 to 255 for red, green, and blue parameters. Negative 
			values remove color. Positive values add color.
		*/
		static void OffsetNonZeroColors(int animationId, int frameId, int red, int green, int blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Offset a subset of colors for all frames using the RGB offset. 
			Use the range of -255 to 255 for red, green, and blue parameters. Negative 
			values remove color. Positive values add color.
		*/
		static void OffsetNonZeroColorsAllFrames(int animationId, int red, int green, int blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Offset a subset of colors for all frames using the RGB offset. 
			Use the range of -255 to 255 for red, green, and blue parameters. Negative 
			values remove color. Positive values add color.
		*/
		static void OffsetNonZeroColorsAllFramesName(const wchar_t* path, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double OffsetNonZeroColorsAllFramesNameD(const wchar_t* path, double red, double green, double blue);
		/*
			This method will only update colors in the animation that are not already 
			set to black. Offset a subset of colors in the frame using the RGB offset. 
			Use the range of -255 to 255 for red, green, and blue parameters. Negative 
			values remove color. Positive values add color.
		*/
		static void OffsetNonZeroColorsName(const wchar_t* path, int frameId, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double OffsetNonZeroColorsNameD(const wchar_t* path, double frameId, double red, double green, double blue);
		/*
			Opens a `Chroma` animation file so that it can be played. Returns an animation 
			id >= 0 upon success. Returns negative one if there was a failure. The 
			animation id is used in most of the API methods.
		*/
		static int OpenAnimation(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double OpenAnimationD(const wchar_t* path);
		/*
			Opens a `Chroma` animation data from memory so that it can be played. `Data` 
			is a pointer to BYTE array of the loaded animation in memory. `Name` will 
			be assigned to the animation when loaded. Returns an animation id >= 0 
			upon success. Returns negative one if there was a failure. The animation 
			id is used in most of the API methods.
		*/
		static int OpenAnimationFromMemory(const BYTE* data, const wchar_t* name);
		/*
			Opens a `Chroma` animation file with the `.chroma` extension. Returns zero 
			upon success. Returns negative one if there was a failure.
		*/
		static int OpenEditorDialog(const wchar_t* path);
		/*
			Open the named animation in the editor dialog and play the animation at 
			start.
		*/
		static int OpenEditorDialogAndPlay(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double OpenEditorDialogAndPlayD(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double OpenEditorDialogD(const wchar_t* path);
		/*
			Sets the `duration` for all grames in the `Chroma` animation to the `duration` 
			parameter. Returns the animation id upon success. Returns negative one 
			upon failure.
		*/
		static int OverrideFrameDuration(int animationId, float duration);
		/*
			D suffix for limited data types.
		*/
		static double OverrideFrameDurationD(double animationId, double duration);
		/*
			Override the duration of all frames with the `duration` value. Animation 
			is referenced by name.
		*/
		static void OverrideFrameDurationName(const wchar_t* path, float duration);
		/*
			Pause the current animation referenced by id.
		*/
		static void PauseAnimation(int animationId);
		/*
			Pause the current animation referenced by name.
		*/
		static void PauseAnimationName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double PauseAnimationNameD(const wchar_t* path);
		/*
			Plays the `Chroma` animation. This will load the animation, if not loaded 
			previously. Returns the animation id upon success. Returns negative one 
			upon failure.
		*/
		static int PlayAnimation(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double PlayAnimationD(double animationId);
		/*
			`PluginPlayAnimationFrame` automatically handles initializing the `ChromaSDK`. 
			The method will play the animation given the `animationId` with looping 
			`on` or `off` starting at the `frameId`.
		*/
		static void PlayAnimationFrame(int animationId, int frameId, bool loop);
		/*
			`PluginPlayAnimationFrameName` automatically handles initializing the `ChromaSDK`. 
			The named `.chroma` animation file will be automatically opened. The animation 
			will play with looping `on` or `off` starting at the `frameId`.
		*/
		static void PlayAnimationFrameName(const wchar_t* path, int frameId, bool loop);
		/*
			D suffix for limited data types.
		*/
		static double PlayAnimationFrameNameD(const wchar_t* path, double frameId, double loop);
		/*
			`PluginPlayAnimationLoop` automatically handles initializing the `ChromaSDK`. 
			The method will play the animation given the `animationId` with looping 
			`on` or `off`.
		*/
		static void PlayAnimationLoop(int animationId, bool loop);
		/*
			`PluginPlayAnimationName` automatically handles initializing the `ChromaSDK`. 
			The named `.chroma` animation file will be automatically opened. The animation 
			will play with looping `on` or `off`.
		*/
		static void PlayAnimationName(const wchar_t* path, bool loop);
		/*
			D suffix for limited data types.
		*/
		static double PlayAnimationNameD(const wchar_t* path, double loop);
		/*
			`PluginPlayComposite` automatically handles initializing the `ChromaSDK`. 
			The named animation files for the `.chroma` set will be automatically opened. 
			The set of animations will play with looping `on` or `off`.
		*/
		static void PlayComposite(const wchar_t* name, bool loop);
		/*
			D suffix for limited data types.
		*/
		static double PlayCompositeD(const wchar_t* name, double loop);
		/*
			Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`. 
			Returns the animation id upon success. Returns negative one upon failure.
		*/
		static int PreviewFrame(int animationId, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double PreviewFrameD(double animationId, double frameId);
		/*
			Displays the `Chroma` animation frame on `Chroma` hardware given the `frameId`. 
			Animaton is referenced by name.
		*/
		static void PreviewFrameName(const wchar_t* path, int frameId);
		/*
			Reduce the frames of the animation by removing every nth element. Animation 
			is referenced by id.
		*/
		static void ReduceFrames(int animationId, int n);
		/*
			Reduce the frames of the animation by removing every nth element. Animation 
			is referenced by name.
		*/
		static void ReduceFramesName(const wchar_t* path, int n);
		/*
			D suffix for limited data types.
		*/
		static double ReduceFramesNameD(const wchar_t* path, double n);
		/*
			Resets the `Chroma` animation to 1 blank frame. Returns the animation id 
			upon success. Returns negative one upon failure.
		*/
		static int ResetAnimation(int animationId);
		/*
			Resume the animation with loop `ON` or `OFF` referenced by id.
		*/
		static void ResumeAnimation(int animationId, bool loop);
		/*
			Resume the animation with loop `ON` or `OFF` referenced by name.
		*/
		static void ResumeAnimationName(const wchar_t* path, bool loop);
		/*
			D suffix for limited data types.
		*/
		static double ResumeAnimationNameD(const wchar_t* path, double loop);
		/*
			Reverse the animation frame order of the `Chroma` animation. Returns the 
			animation id upon success. Returns negative one upon failure. Animation 
			is referenced by id.
		*/
		static int Reverse(int animationId);
		/*
			Reverse the animation frame order of the `Chroma` animation. Animation is 
			referenced by id.
		*/
		static void ReverseAllFrames(int animationId);
		/*
			Reverse the animation frame order of the `Chroma` animation. Animation is 
			referenced by name.
		*/
		static void ReverseAllFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double ReverseAllFramesNameD(const wchar_t* path);
		/*
			Save the animation referenced by id to the path specified.
		*/
		static int SaveAnimation(int animationId, const wchar_t* path);
		/*
			Save the named animation to the target path specified.
		*/
		static int SaveAnimationName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Set the animation color for a frame given the `1D` `led`. The `led` should 
			be greater than or equal to 0 and less than the `MaxLeds`. The animation 
			is referenced by id.
		*/
		static void Set1DColor(int animationId, int frameId, int led, int color);
		/*
			Set the animation color for a frame given the `1D` `led`. The `led` should 
			be greater than or equal to 0 and less than the `MaxLeds`. The animation 
			is referenced by name.
		*/
		static void Set1DColorName(const wchar_t* path, int frameId, int led, int color);
		/*
			D suffix for limited data types.
		*/
		static double Set1DColorNameD(const wchar_t* path, double frameId, double led, double color);
		/*
			Set the animation color for a frame given the `2D` `row` and `column`. The 
			`row` should be greater than or equal to 0 and less than the `MaxRow`. 
			The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
			The animation is referenced by id.
		*/
		static void Set2DColor(int animationId, int frameId, int row, int column, int color);
		/*
			Set the animation color for a frame given the `2D` `row` and `column`. The 
			`row` should be greater than or equal to 0 and less than the `MaxRow`. 
			The `column` should be greater than or equal to 0 and less than the `MaxColumn`. 
			The animation is referenced by name.
		*/
		static void Set2DColorName(const wchar_t* path, int frameId, int row, int column, int color);
		/*
			D suffix for limited data types.
		*/
		static double Set2DColorNameD(const wchar_t* path, double frameId, double rowColumnIndex, double color);
		/*
			When custom color is set, the custom key mode will be used. The animation 
			is referenced by id.
		*/
		static void SetChromaCustomColorAllFrames(int animationId);
		/*
			When custom color is set, the custom key mode will be used. The animation 
			is referenced by name.
		*/
		static void SetChromaCustomColorAllFramesName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double SetChromaCustomColorAllFramesNameD(const wchar_t* path);
		/*
			Set the Chroma custom key color flag on all frames. `True` changes the layout 
			from grid to key. `True` changes the layout from key to grid. Animation 
			is referenced by id.
		*/
		static void SetChromaCustomFlag(int animationId, bool flag);
		/*
			Set the Chroma custom key color flag on all frames. `True` changes the layout 
			from grid to key. `True` changes the layout from key to grid. Animation 
			is referenced by name.
		*/
		static void SetChromaCustomFlagName(const wchar_t* path, bool flag);
		/*
			D suffix for limited data types.
		*/
		static double SetChromaCustomFlagNameD(const wchar_t* path, double flag);
		/*
			Set the current frame of the animation referenced by id.
		*/
		static void SetCurrentFrame(int animationId, int frameId);
		/*
			Set the current frame of the animation referenced by name.
		*/
		static void SetCurrentFrameName(const wchar_t* path, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double SetCurrentFrameNameD(const wchar_t* path, double frameId);
		/*
			Set the custom alpha flag on the color array
		*/
		static RZRESULT SetCustomColorFlag2D(int device, int* colors);
		/*
			Changes the `deviceType` and `device` of a `Chroma` animation. If the device 
			is changed, the `Chroma` animation will be reset with 1 blank frame. Returns 
			the animation id upon success. Returns negative one upon failure.
		*/
		static int SetDevice(int animationId, int deviceType, int device);
		/*
			SetEffect will display the referenced effect id.
		*/
		static RZRESULT SetEffect(const ChromaSDK::FChromaSDKGuid& effectId);
		/*
			SetEffectCustom1D will display the referenced colors immediately
		*/
		static RZRESULT SetEffectCustom1D(const int device, const int* colors);
		/*
			SetEffectCustom2D will display the referenced colors immediately.
		*/
		static RZRESULT SetEffectCustom2D(const int device, const int* colors);
		/*
			SetEffectKeyboardCustom2D will display the referenced custom keyboard colors 
			immediately. Colors represent a visual grid layout. Keys represent the 
			hotkeys for any layout.
		*/
		static RZRESULT SetEffectKeyboardCustom2D(const int device, const int* colors, const int* keys);
		/*
			When the idle animation is used, the named animation will play when no other 
			animations are playing. Reference the animation by id.
		*/
		static void SetIdleAnimation(int animationId);
		/*
			When the idle animation is used, the named animation will play when no other 
			animations are playing. Reference the animation by name.
		*/
		static void SetIdleAnimationName(const wchar_t* path);
		/*
			Set animation key to a static color for the given frame.
		*/
		static void SetKeyColor(int animationId, int frameId, int rzkey, int color);
		/*
			Set the key to the specified key color for all frames. Animation is referenced 
			by id.
		*/
		static void SetKeyColorAllFrames(int animationId, int rzkey, int color);
		/*
			Set the key to the specified key color for all frames. Animation is referenced 
			by name.
		*/
		static void SetKeyColorAllFramesName(const wchar_t* path, int rzkey, int color);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyColorAllFramesNameD(const wchar_t* path, double rzkey, double color);
		/*
			Set the key to the specified key color for all frames. Animation is referenced 
			by id.
		*/
		static void SetKeyColorAllFramesRGB(int animationId, int rzkey, int red, int green, int blue);
		/*
			Set the key to the specified key color for all frames. Animation is referenced 
			by name.
		*/
		static void SetKeyColorAllFramesRGBName(const wchar_t* path, int rzkey, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyColorAllFramesRGBNameD(const wchar_t* path, double rzkey, double red, double green, double blue);
		/*
			Set animation key to a static color for the given frame.
		*/
		static void SetKeyColorName(const wchar_t* path, int frameId, int rzkey, int color);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyColorNameD(const wchar_t* path, double frameId, double rzkey, double color);
		/*
			Set the key to the specified key color for the specified frame. Animation 
			is referenced by id.
		*/
		static void SetKeyColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue);
		/*
			Set the key to the specified key color for the specified frame. Animation 
			is referenced by name.
		*/
		static void SetKeyColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue);
		/*
			Set animation key to a static color for the given frame if the existing 
			color is not already black.
		*/
		static void SetKeyNonZeroColor(int animationId, int frameId, int rzkey, int color);
		/*
			Set animation key to a static color for the given frame if the existing 
			color is not already black.
		*/
		static void SetKeyNonZeroColorName(const wchar_t* path, int frameId, int rzkey, int color);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyNonZeroColorNameD(const wchar_t* path, double frameId, double rzkey, double color);
		/*
			Set the key to the specified key color for the specified frame where color 
			is not black. Animation is referenced by id.
		*/
		static void SetKeyNonZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue);
		/*
			Set the key to the specified key color for the specified frame where color 
			is not black. Animation is referenced by name.
		*/
		static void SetKeyNonZeroColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyNonZeroColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue);
		/*
			Set animation key by row and column to a static color for the given frame.
		*/
		static void SetKeyRowColumnColorName(const wchar_t* path, int frameId, int row, int column, int color);
		/*
			Set an array of animation keys to a static color for the given frame. Animation 
			is referenced by id.
		*/
		static void SetKeysColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames. Animation 
			is referenced by id.
		*/
		static void SetKeysColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames. Animation 
			is referenced by name.
		*/
		static void SetKeysColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames. Animation 
			is referenced by id.
		*/
		static void SetKeysColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for all frames. Animation 
			is referenced by name.
		*/
		static void SetKeysColorAllFramesRGBName(const wchar_t* path, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame.
		*/
		static void SetKeysColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for the given frame. Animation 
			is referenced by id.
		*/
		static void SetKeysColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame. Animation 
			is referenced by name.
		*/
		static void SetKeysColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame if 
			the existing color is not already black.
		*/
		static void SetKeysNonZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is not black. Animation is referenced by id.
		*/
		static void SetKeysNonZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames if the existing 
			color is not already black. Reference animation by name.
		*/
		static void SetKeysNonZeroColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for the given frame if 
			the existing color is not already black. Reference animation by name.
		*/
		static void SetKeysNonZeroColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is not black. Animation is referenced by id.
		*/
		static void SetKeysNonZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is not black. Animation is referenced by name.
		*/
		static void SetKeysNonZeroColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is black. Animation is referenced by id.
		*/
		static void SetKeysZeroColor(int animationId, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames where the 
			color is black. Animation is referenced by id.
		*/
		static void SetKeysZeroColorAllFrames(int animationId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames where the 
			color is black. Animation is referenced by name.
		*/
		static void SetKeysZeroColorAllFramesName(const wchar_t* path, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for all frames where the 
			color is black. Animation is referenced by id.
		*/
		static void SetKeysZeroColorAllFramesRGB(int animationId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for all frames where the 
			color is black. Animation is referenced by name.
		*/
		static void SetKeysZeroColorAllFramesRGBName(const wchar_t* path, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is black. Animation is referenced by name.
		*/
		static void SetKeysZeroColorName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int color);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is black. Animation is referenced by id.
		*/
		static void SetKeysZeroColorRGB(int animationId, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set an array of animation keys to a static color for the given frame where 
			the color is black. Animation is referenced by name.
		*/
		static void SetKeysZeroColorRGBName(const wchar_t* path, int frameId, const int* rzkeys, int keyCount, int red, int green, int blue);
		/*
			Set animation key to a static color for the given frame where the color 
			is black. Animation is referenced by id.
		*/
		static void SetKeyZeroColor(int animationId, int frameId, int rzkey, int color);
		/*
			Set animation key to a static color for the given frame where the color 
			is black. Animation is referenced by name.
		*/
		static void SetKeyZeroColorName(const wchar_t* path, int frameId, int rzkey, int color);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyZeroColorNameD(const wchar_t* path, double frameId, double rzkey, double color);
		/*
			Set animation key to a static color for the given frame where the color 
			is black. Animation is referenced by id.
		*/
		static void SetKeyZeroColorRGB(int animationId, int frameId, int rzkey, int red, int green, int blue);
		/*
			Set animation key to a static color for the given frame where the color 
			is black. Animation is referenced by name.
		*/
		static void SetKeyZeroColorRGBName(const wchar_t* path, int frameId, int rzkey, int red, int green, int blue);
		/*
			D suffix for limited data types.
		*/
		static double SetKeyZeroColorRGBNameD(const wchar_t* path, double frameId, double rzkey, double red, double green, double blue);
		/*
			Invokes the setup for a debug logging callback so that `stdout` is redirected 
			to the callback. This is used by `Unity` so that debug messages can appear 
			in the console window.
		*/
		static void SetLogDelegate(DebugLogPtr fp);
		/*
			Sets the target device to the static color.
		*/
		static void SetStaticColor(int deviceType, int device, int color);
		/*
			Sets all devices to the static color.
		*/
		static void SetStaticColorAll(int color);
		/*
			Sets the target device to the static color.
		*/
		static void StaticColor(int deviceType, int device, int color);
		/*
			Sets all devices to the static color.
		*/
		static void StaticColorAll(int color);
		/*
			D suffix for limited data types.
		*/
		static double StaticColorD(double deviceType, double device, double color);
		/*
			`PluginStopAll` will automatically stop all animations that are playing.
		*/
		static void StopAll();
		/*
			Stops animation playback if in progress. Returns the animation id upon success. 
			Returns negative one upon failure.
		*/
		static int StopAnimation(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double StopAnimationD(double animationId);
		/*
			`PluginStopAnimationName` automatically handles initializing the `ChromaSDK`. 
			The named `.chroma` animation file will be automatically opened. The animation 
			will stop if playing.
		*/
		static void StopAnimationName(const wchar_t* path);
		/*
			D suffix for limited data types.
		*/
		static double StopAnimationNameD(const wchar_t* path);
		/*
			`PluginStopAnimationType` automatically handles initializing the `ChromaSDK`. 
			If any animation is playing for the `deviceType` and `device` combination, 
			it will be stopped.
		*/
		static void StopAnimationType(int deviceType, int device);
		/*
			D suffix for limited data types.
		*/
		static double StopAnimationTypeD(double deviceType, double device);
		/*
			`PluginStopComposite` automatically handles initializing the `ChromaSDK`. 
			The named animation files for the `.chroma` set will be automatically opened. 
			The set of animations will be stopped if playing.
		*/
		static void StopComposite(const wchar_t* name);
		/*
			D suffix for limited data types.
		*/
		static double StopCompositeD(const wchar_t* name);
		/*
			Return color1 - color2
		*/
		static int SubtractColor(const int color1, const int color2);
		/*
			Subtract the source color from the target color for the frame where the 
			target color is not black. Source and target are referenced by id.
		*/
		static void SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
		/*
			Subtract the source color from the target color for all frames where the 
			target color is not black. Source and target are referenced by id.
		*/
		static void SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Subtract the source color from the target color for all frames where the 
			target color is not black. Source and target are referenced by name.
		*/
		static void SubtractNonZeroAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Subtract the source color from the target color for all frames where the 
			target color is not black starting at offset for the length of the source. 
			Source and target are referenced by id.
		*/
		static void SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Subtract the source color from the target color for all frames where the 
			target color is not black starting at offset for the length of the source. 
			Source and target are referenced by name.
		*/
		static void SubtractNonZeroAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Subtract the source color from the target color for the frame where the 
			target color is not black. Source and target are referenced by name.
		*/
		static void SubtractNonZeroAllKeysName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId);
		/*
			Subtract the source color from the target where color is not black for the 
			source frame and target offset frame, reference source and target by id.
		*/
		static void SubtractNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Subtract the source color from the target where color is not black for the 
			source frame and target offset frame, reference source and target by name.
		*/
		static void SubtractNonZeroAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Subtract the source color from the target color where the target color is 
			not black for all frames. Reference source and target by id.
		*/
		static void SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
		/*
			Subtract the source color from the target color where the target color is 
			not black for all frames. Reference source and target by name.
		*/
		static void SubtractNonZeroTargetAllKeysAllFramesName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroTargetAllKeysAllFramesNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation);
		/*
			Subtract the source color from the target color where the target color is 
			not black for all frames starting at the target offset for the length of 
			the source. Reference source and target by id.
		*/
		static void SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int offset);
		/*
			Subtract the source color from the target color where the target color is 
			not black for all frames starting at the target offset for the length of 
			the source. Reference source and target by name.
		*/
		static void SubtractNonZeroTargetAllKeysAllFramesOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int offset);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroTargetAllKeysAllFramesOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double offset);
		/*
			Subtract the source color from the target color where the target color is 
			not black from the source frame to the target offset frame. Reference source 
			and target by id.
		*/
		static void SubtractNonZeroTargetAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int offset);
		/*
			Subtract the source color from the target color where the target color is 
			not black from the source frame to the target offset frame. Reference source 
			and target by name.
		*/
		static void SubtractNonZeroTargetAllKeysOffsetName(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, int frameId, int offset);
		/*
			D suffix for limited data types.
		*/
		static double SubtractNonZeroTargetAllKeysOffsetNameD(const wchar_t* sourceAnimation, const wchar_t* targetAnimation, double frameId, double offset);
		/*
			Subtract all frames with the min RGB color where the animation color is 
			less than the min threshold AND with the max RGB color where the animation 
			is more than the max threshold. Animation is referenced by id.
		*/
		static void SubtractThresholdColorsMinMaxAllFramesRGB(const int animationId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue);
		/*
			Subtract all frames with the min RGB color where the animation color is 
			less than the min threshold AND with the max RGB color where the animation 
			is more than the max threshold. Animation is referenced by name.
		*/
		static void SubtractThresholdColorsMinMaxAllFramesRGBName(const wchar_t* path, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue);
		/*
			D suffix for limited data types.
		*/
		static double SubtractThresholdColorsMinMaxAllFramesRGBNameD(const wchar_t* path, double minThreshold, double minRed, double minGreen, double minBlue, double maxThreshold, double maxRed, double maxGreen, double maxBlue);
		/*
			Subtract the specified frame with the min RGB color where the animation 
			color is less than the min threshold AND with the max RGB color where the 
			animation is more than the max threshold. Animation is referenced by id.
		*/
		static void SubtractThresholdColorsMinMaxRGB(const int animationId, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue);
		/*
			Subtract the specified frame with the min RGB color where the animation 
			color is less than the min threshold AND with the max RGB color where the 
			animation is more than the max threshold. Animation is referenced by name.
		*/
		static void SubtractThresholdColorsMinMaxRGBName(const wchar_t* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue);
		/*
			D suffix for limited data types.
		*/
		static double SubtractThresholdColorsMinMaxRGBNameD(const wchar_t* path, const int frameId, const int minThreshold, const int minRed, const int minGreen, const int minBlue, const int maxThreshold, const int maxRed, const int maxGreen, const int maxBlue);
		/*
			Trim the end of the animation. The length of the animation will be the lastFrameId 
			plus one. Reference the animation by id.
		*/
		static void TrimEndFrames(int animationId, int lastFrameId);
		/*
			Trim the end of the animation. The length of the animation will be the lastFrameId 
			plus one. Reference the animation by name.
		*/
		static void TrimEndFramesName(const wchar_t* path, int lastFrameId);
		/*
			D suffix for limited data types.
		*/
		static double TrimEndFramesNameD(const wchar_t* path, double lastFrameId);
		/*
			Remove the frame from the animation. Reference animation by id.
		*/
		static void TrimFrame(int animationId, int frameId);
		/*
			Remove the frame from the animation. Reference animation by name.
		*/
		static void TrimFrameName(const wchar_t* path, int frameId);
		/*
			D suffix for limited data types.
		*/
		static double TrimFrameNameD(const wchar_t* path, double frameId);
		/*
			Trim the start of the animation starting at frame 0 for the number of frames. 
			Reference the animation by id.
		*/
		static void TrimStartFrames(int animationId, int numberOfFrames);
		/*
			Trim the start of the animation starting at frame 0 for the number of frames. 
			Reference the animation by name.
		*/
		static void TrimStartFramesName(const wchar_t* path, int numberOfFrames);
		/*
			D suffix for limited data types.
		*/
		static double TrimStartFramesNameD(const wchar_t* path, double numberOfFrames);
		/*
			Uninitializes the `ChromaSDK`. Returns 0 upon success. Returns negative 
			one upon failure.
		*/
		static RZRESULT Uninit();
		/*
			D suffix for limited data types.
		*/
		static double UninitD();
		/*
			Unloads `Chroma` effects to free up resources. Returns the animation id 
			upon success. Returns negative one upon failure. Reference the animation 
			by id.
		*/
		static int UnloadAnimation(int animationId);
		/*
			D suffix for limited data types.
		*/
		static double UnloadAnimationD(double animationId);
		/*
			Unload the animation effects. Reference the animation by name.
		*/
		static void UnloadAnimationName(const wchar_t* path);
		/*
			Unload the the composite set of animation effects. Reference the animation 
			by name.
		*/
		static void UnloadComposite(const wchar_t* name);
		/*
			Unload the Razer Chroma SDK Library before exiting the application.
		*/
		static void UnloadLibrarySDK();
		/*
			Unload the Razer Chroma Streaming Plugin Library before exiting the application.
		*/
		static void UnloadLibraryStreamingPlugin();
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
		static int UpdateFrame(int animationId, int frameId, float duration, int* colors, int length, int* keys, int keysLength);
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
		static int UpdateFrameName(const wchar_t* path, int frameId, float duration, int* colors, int length, int* keys, int keysLength);
		/*
			On by default, `UseForwardChromaEvents` sends the animation name to `CoreSetEventName` 
			automatically when `PlayAnimationName` is called.
		*/
		static void UseForwardChromaEvents(bool flag);
		/*
			When the idle animation flag is true, when no other animations are playing, 
			the idle animation will be used. The idle animation will not be affected 
			by the API calls to PluginIsPlaying, PluginStopAnimationType, PluginGetPlayingAnimationId, 
			and PluginGetPlayingAnimationCount. Then the idle animation flag is false, 
			the idle animation is disabled. `Device` uses `EChromaSDKDeviceEnum` enums.
		*/
		static void UseIdleAnimation(int device, bool flag);
		/*
			Set idle animation flag for all devices.
		*/
		static void UseIdleAnimations(bool flag);
		/*
			Set preloading animation flag, which is set to true by default. Reference 
			animation by id.
		*/
		static void UsePreloading(int animationId, bool flag);
		/*
			Set preloading animation flag, which is set to true by default. Reference 
			animation by name.
		*/
		static void UsePreloadingName(const wchar_t* path, bool flag);
#pragma endregion


		static int InitAPI();
		static int UninitAPI();
		static bool GetIsInitializedAPI();
		static bool _sIsInitializedAPI;
		static bool _sInitialized;
	};
}

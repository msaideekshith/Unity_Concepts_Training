//Open in Notepad++ if you have it.
#Made By Rishabh (it.rishabh.jain@gmail.com)


01 Canvas
	inspector Properties include:
	
	Canvas
		Rendering Mode
		Pixel Perfect
		Sort Order
		Target Display
		Additional Shader Channels
	Canvas Scaler
		UI Scale Mode
		Reference Resolution
		Screen match mode
		Match
		Reference Pixel per unity
	Graphic Raycaster
		Ignore Reversed Graphics
		Blocking Objects
		Blocking Masks
	__________________________________________________________
	Canvas -> Rendering Mode -> :
	Notes:
		using this in my scene '001 (a) Canvas', I make use of two canvas over two different cameras to show how a mini map works.
		though the aim was so, I learned that a canvas that is set to 'Screen Space - Camera' will exist in 3d world and gets affected by distance from camera.
		to avoid issues, I studied the 'clipping planes' from camera and placed my canvas at minimum distance from camera i.e., 
		Canvas-> Plane distance = Camera -> Clipping Plane Min
		this along with a little changes in order game me exactly what i needed.
		
	Explanation: 
		Rendering Mode has 3 options:
			Screen Space Overlay: The canvas is created in a way that it cannot move and is projected over Main camera(tag) that try to show something
			Screen Space Camera : requires a camera to project on. Exists in 3d World so it is visible on that camera but may not be visible if something is between canvas and the camera.
			World Space: This canvas stays on world space irrespective of camera position. So they are ideal for floating texts or images.
	__________________________________________________________
	Canvas -> Pixel Perfect -> :
	Notes:
		using this in my scene '002 (b) Canvas', Wanted to set an Image to Pixel Perfect in (Screen Space Overlay) rendering mode and see changing effects when screen is resized
	
	Explanation:
		When screen size is changed in a fixed ratio screen size of game, the image shows no change wrt(with respect to) the screen.
		But, if we keep setting at 'Free Aspect' in game view and then resize, the image keeps resizing to take same percentage of the screen as if had before the resize began,
		this leads to conclusion that it wants to have same pixel size both horizontally and vertically.
	__________________________________________________________
	Canvas -> Sort Order ->
	Notes:
		using this in my scene '002 b Canvas', showed that a canvas with higher Sort Order is rendered over canvas with smaller sort order
		this does not depend on the hierarchy
	Explanation:
		The Higher the Sort Order, the later a particular canvas is rendered and on top so it is always visible.
	__________________________________________________________
	Canvas -> Target Display ->
	Explanation:
		We have 10 Display in our Game. changing Target Display changes which screen will get the camera's view projected on it.
	__________________________________________________________
	Canvas -> Additional Shader Channels ->
	Doubts:
		Pramodh needs to clear. Waiting for it
		
		
	__________________________________________________________
	Canvas -> Render Camera (Screen Space - Camera) ->
	Explanation:
		attach the camera to this canvas to render this canvas on a specified camera.
		Refer to 'Canvas -> Rendering Mode' for details
	__________________________________________________________
	Canvas Scaler -> UI Scale Mode ->
	Explanation:
		Constant Pixel Size: 
		Scale With Screen Size:
		Constant Physical Size:
	Pramodh needs to clear. Waiting for it...
02 Panels
	
03 Etc










































































































open "https://github.com/maximrouf/RegionCapture"
and download the project

create a new Project and copy the contents in the assets folder
/*
download an Image target and a model from some site, 
	or 
	take a pair from someone and make the target image as Vuforia database
download the target image, use the development key and set up as normal AR App.

the object has to be UV mapped to the same Image Target. 
And try to keep the same dimension size for Image Target as the real Image size in real world
*/

create a new Vuforia Developement Key and copy the licence Key, paste this in Vuforia Configuration in AR Camera.
download a model with proper UV mapped Image and use the Image as target Image.
	to do this, download image and convert it as necessary to open in vuforia image target without changing it's dimentions.
	create a new target Database in Vuforia and add the converted image to it.
	download the new Database to unity as a unity package
	
Create the new Image target and set it to target the image.
in the downloaded/imported asset folder, instantiate the prefab 'Region_Capture' and resize it to match the boundary of Image Target perfectly
In RegionCapture component of this instantiated prefab, add a reference to AR Camera
open the Model we want to use Region Capture with and below it's Mesh Renderer component, add a component called 'RC_Get_Texture'
	and add a reference to Region Capture to this component.
	
If multiple new objects are created at run time, ensure that in database option of Vuforia Configuration,
	only that database is active and loaded and activated that you want to use.

Try running the app, if it fails, contact vikram.



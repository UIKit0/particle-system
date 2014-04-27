#ifndef CAMERA_H
#define CAMERA_H

#include "scenenode.h"
#include "math/matrix4.h"

class Camera : public SceneNode
{
    public:
        Camera();
		Camera(Vec3 position, Vec3 rotation, float aspectRatio, float fovAngle, float nearPlane, float farPlane);
		~Camera();
		Matrix4 getViewMatrix();
		Matrix4 getProjectionMatrix();
		void setAspectRatio(float ratio);
		void setFOV(float angle);
		void setPlanes(float near, float far);
		void lookAt(Vec3 direction);

	protected:
		void buildViewMatrix();
		void buildProjectionMatrix();

	private:
		Matrix4 viewMatrix, projectionMatrix;
		float aspectRatio, fovAngle, farPlane, nearPlane;
};

#endif // CAMERA_H
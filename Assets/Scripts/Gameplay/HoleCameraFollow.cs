using UnityEngine;

[DisallowMultipleComponent]
public sealed class HoleCameraFollow : MonoBehaviour
{
    [SerializeField] float smoothTime = .15f;
    [SerializeField] float maxFollowSpeed = 22f;
    [SerializeField] Vector2 followStrength = new Vector2(.92f, .84f);


    Transform target;
    Vector3 cameraOrigin;
    Vector3 targetOrigin;
    Vector3 followVelocity;

    public Transform Target => target;

public void Configure(Transform followTarget)
    {
        target = followTarget;
        cameraOrigin = transform.position;
        targetOrigin = followTarget.position;
        followVelocity = Vector3.zero;
    }

void LateUpdate()
    {
        if (!target) return;

        Vector3 targetDelta = target.position - targetOrigin;
        Vector3 desiredPosition = cameraOrigin + new Vector3(
            targetDelta.x * followStrength.x,
            0f,
            targetDelta.z * followStrength.y);

        transform.position = Vector3.SmoothDamp(
            transform.position,
            desiredPosition,
            ref followVelocity,
            smoothTime,
            maxFollowSpeed,
            Time.unscaledDeltaTime);
    }

public void DebugSnapToTarget()
    {
        if (!target) return;
        Vector3 targetDelta = target.position - targetOrigin;
        transform.position = cameraOrigin + new Vector3(
            targetDelta.x * followStrength.x,
            0f,
            targetDelta.z * followStrength.y);
        followVelocity = Vector3.zero;
    }
}

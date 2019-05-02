; Auto-generated. Do not edit!


(cl:in-package performance_tests-msg)


;//! \htmlinclude SuperAwesome.msg.html

(cl:defclass <SuperAwesome> (roslisp-msg-protocol:ros-message)
  ((str
    :reader str
    :initarg :str
    :type cl:string
    :initform ""))
)

(cl:defclass SuperAwesome (<SuperAwesome>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SuperAwesome>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SuperAwesome)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name performance_tests-msg:<SuperAwesome> is deprecated: use performance_tests-msg:SuperAwesome instead.")))

(cl:ensure-generic-function 'str-val :lambda-list '(m))
(cl:defmethod str-val ((m <SuperAwesome>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader performance_tests-msg:str-val is deprecated.  Use performance_tests-msg:str instead.")
  (str m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SuperAwesome>) ostream)
  "Serializes a message object of type '<SuperAwesome>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'str))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'str))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SuperAwesome>) istream)
  "Deserializes a message object of type '<SuperAwesome>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'str) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'str) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SuperAwesome>)))
  "Returns string type for a message object of type '<SuperAwesome>"
  "performance_tests/SuperAwesome")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SuperAwesome)))
  "Returns string type for a message object of type 'SuperAwesome"
  "performance_tests/SuperAwesome")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SuperAwesome>)))
  "Returns md5sum for a message object of type '<SuperAwesome>"
  "994972b6e03928b2476860ce6c4c8e17")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SuperAwesome)))
  "Returns md5sum for a message object of type 'SuperAwesome"
  "994972b6e03928b2476860ce6c4c8e17")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SuperAwesome>)))
  "Returns full string definition for message of type '<SuperAwesome>"
  (cl:format cl:nil "string str~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SuperAwesome)))
  "Returns full string definition for message of type 'SuperAwesome"
  (cl:format cl:nil "string str~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SuperAwesome>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'str))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SuperAwesome>))
  "Converts a ROS message object to a list"
  (cl:list 'SuperAwesome
    (cl:cons ':str (str msg))
))

;; Auto-generated. Do not edit!


(when (boundp 'performance_tests::SuperAwesome)
  (if (not (find-package "PERFORMANCE_TESTS"))
    (make-package "PERFORMANCE_TESTS"))
  (shadow 'SuperAwesome (find-package "PERFORMANCE_TESTS")))
(unless (find-package "PERFORMANCE_TESTS::SUPERAWESOME")
  (make-package "PERFORMANCE_TESTS::SUPERAWESOME"))

(in-package "ROS")
;;//! \htmlinclude SuperAwesome.msg.html


(defclass performance_tests::SuperAwesome
  :super ros::object
  :slots (_str ))

(defmethod performance_tests::SuperAwesome
  (:init
   (&key
    ((:str __str) "")
    )
   (send-super :init)
   (setq _str (string __str))
   self)
  (:str
   (&optional __str)
   (if __str (setq _str __str)) _str)
  (:serialization-length
   ()
   (+
    ;; string _str
    4 (length _str)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _str
       (write-long (length _str) s) (princ _str s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _str
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _str (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get performance_tests::SuperAwesome :md5sum-) "994972b6e03928b2476860ce6c4c8e17")
(setf (get performance_tests::SuperAwesome :datatype-) "performance_tests/SuperAwesome")
(setf (get performance_tests::SuperAwesome :definition-)
      "string str

")



(provide :performance_tests/SuperAwesome "994972b6e03928b2476860ce6c4c8e17")



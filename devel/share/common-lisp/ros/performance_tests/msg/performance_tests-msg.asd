
(cl:in-package :asdf)

(defsystem "performance_tests-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SuperAwesome" :depends-on ("_package_SuperAwesome"))
    (:file "_package_SuperAwesome" :depends-on ("_package"))
  ))
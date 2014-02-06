==== CAS Roles ====

=== Introduction ===

This Module is supposed to be used in conjunction with cas and cas_attributes.
The general working principle is as follows:
You select a mask which contains attributes from the CAS user as a CAS role
reference. (If one of the CAS attributes is an array, the CAS role reference
is also an array. If several attributes are arrays, then the role eference is
the combination of all elements with all others.)
This role reference is then compared to the drupal roles.
How this comparison is done can be configured.


=== Options ===

== Fetch CAS Roles ==
  * only when a CAS account is created (i.e., the first login of a CAS user).
     The roles are only set at the first login, when the user is created. The
		 roles are not removed later.

  * every time a CAS user logs in.
     Every time the user logs in, the roles are updated. 

== CAS vs Drupal roles ==
  * Only assign roles which are present in drupal and match, remove user roles not present in CAS.
     If a role from CAS matches the name of a drupal role, the role is assigned. 
     If a user has a role in drupal but the role is not in the CAS attribute, the role is removed.
     
  * Create roles which don't exits in Drupal, remove user roles not present in CAS.
     The same as the first option except new drupal roles are created for every new CAS attribute.
     
  * Match roles with regular expressions. 
     The roles are managed by regular expressions. This is the option which
		 justifies the use of this module.

== Attribute for roles ==

A CAS attribute just like in the module cas_attributes.

The CAS attribute may also be an array or even a nested array.
The field may also contain several CAS attributes in a token format. If for
example you put: "[cas-attribute-drupal_roles]-[cas-attribute-campus]" and
someone logs in with the roles "student" and "volunteer" and has as campus
attribute "main" the result would be an array containing "student-main" and
"volunteer-main".

The roles are attributed if any of the array elemnts match

== CAS roles mappings ==

Regular expression to map user roles. The role is assigned if one of the roles
in the attribute array matches the expression. An empty field means the role is
not administrated by CAS.

The field needs to be empty or a valid regular expression.






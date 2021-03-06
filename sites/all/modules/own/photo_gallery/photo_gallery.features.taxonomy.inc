<?php
/**
 * @file
 * photo_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function photo_gallery_taxonomy_default_vocabularies() {
  return array(
    'gallery' => array(
      'name' => 'Gallery',
      'machine_name' => 'gallery',
      'description' => 'This is for the image galleries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

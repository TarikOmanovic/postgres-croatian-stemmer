/* contrib/croatian-stemmer/croatian-stemmer--1.0.sql */

-- complain if script is sourced in psql, rather than via CREATE EXTENSION

\echo Use "CREATE EXTENSION croatian-stemmer" to load this file. \quit

CREATE FUNCTION croatian_lemma (text) RETURNS text
AS 'MODULE_PATHNAME','croatian_lemma'
LANGUAGE C IMMUTABLE STRICT;


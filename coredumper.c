#include "coredumper.h"

//this is a fake coredumper CPP file
//all functions do NOTHING!
//but at least it will let you compile and run your application on ARM 6/7

int GetCoreDump(void) {
	return 0;
}

/* Gets a core dump with the given parameters. This is not compatible with any
* core size limiting parameters.
*/
int GetCoreDumpWith(const struct CoreDumpParameters *params) {
	return 0;
}

/* Attempts to compress the core file on the fly, if a suitable compressor
* could be located. Sets "selected_compressor" to the compressor that
* was picked.
*/
int GetCompressedCoreDump(const struct CoredumperCompressor compressors[],
	struct CoredumperCompressor **selected_compressor) {
	return 0;
}

/* Writes the core file to disk. This is a convenience method wrapping
* GetCoreDump(). If a core file could not be generated for any reason,
* -1 is returned and errno is set appropriately. On success, zero is
* returned.
*/
int WriteCoreDump(const char *file_name) {
	return 0;
}

/* Writes a core dump to the given file with the given parameters.           */
int WriteCoreDumpWith(const struct CoreDumpParameters *params,
	const char *file_name) {
	return 0;
}

/* Callers might need to restrict the maximum size of the core file. This
* convenience method provides the necessary support to emulate "ulimit -c".
*/
int WriteCoreDumpLimited(const char *file_name, size_t max_length) {
	return 0;
}

/* Writes a limited size core file, however instead of truncating the file at
* the limit, the core dumper will prioritize smaller memory segments. This
* means that a large heap will most likely either be only partially included
* or not included at all. If the max_length is set too small, this could cause
* performance issues.
*/
int WriteCoreDumpLimitedByPriority(const char *file_name, size_t max_length) {
	return 0;
}

/* Attempts to compress the core file on the fly, if a suitable compressor
* could be located. Sets "selected_compressor" to the compressor that
* was picked. The filename automatically has a suitable suffix appended
* to it. Normally this would be ".bz2" for bzip2 compression ".gz" for
* gzip compression, or ".Z" for compress compression. This behavior can
* be changed by defining custom CoredumperCompressor descriptions.
*/
int WriteCompressedCoreDump(const char *file_name, size_t max_length,
	const struct CoredumperCompressor compressors[],
	struct CoredumperCompressor **selected_compressor) {
	return 0;
}

/* Clears the given coredumper parameters to zero, sets the size parameter and
* the max_length parameter to SIZE_MAX.
*/
void ClearCoreDumpParametersInternal(struct CoreDumpParameters *params,
	size_t size) {
	return;
}

/* Sets the coredumper parameters to provide a limited core dump. Returns
* zero on success otherwise -1 will be returned and errno will be set.
*/
int SetCoreDumpLimited(struct CoreDumpParameters *params, size_t max_length) {
	return 0;
}

/* Sets the coredumper parameters to provide a compressed core dump. Returns
* zero on success otherwise -1 will be returned and errno will be set.
*/
int SetCoreDumpCompressed(struct CoreDumpParameters *params,
	const struct CoredumperCompressor *compressors,
	struct CoredumperCompressor **selected_compressor) {
	return 0;
}

/* Sets the coredumper parameters to provide a prioritized limited core file.
* Returns zero on success otherwise -1 will be returned and errno will be set.
*/
int SetCoreDumpLimitedByPriority(struct CoreDumpParameters *params,
	size_t max_length) {
	return 0;
}

/* Sets the coredumper parameters to add extra notes to the core file.
* Returns zero on success otherwise -1 will be returned and errno will be set.
*/
int SetCoreDumpNotes(struct CoreDumpParameters *params,
	struct CoredumperNote *notes, int note_count) {
	return 0;
}

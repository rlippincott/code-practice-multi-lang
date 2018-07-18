(function($){
    $.fn.changeImage = function() {
        return this.each(function() {
        $(this).find("img").each(function() {
        // get old and new urls
            var oldURL = $(this).attr("src");
            var newURL = $(this).attr("id");

            // preload images
            var rolloverImage = new Image();
            rolloverImage.src = newURL;

            // set up event handlers
            $(this).hover(
                function() {
                    $(this).attr("src", newURL);
                },
                function() {
                  $(this).attr("src", oldURL);
                }
            ); // end hover
        });
        });
    };
})(jQuery);
